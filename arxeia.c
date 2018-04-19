#include <tchar.h>
#include "stdio.h"
#include "fcntl.h"
#include <stdlib.h>

//dinoume pseydonimo sta arxeia mas gia eykolh diaxeirish

#define file1 "farmaka.dbs"
#define file2 "statistika.txt"
#define file3 "paraggelia.txt"


//deikths poy mporei na  kanoyme diaxeirish ascii  arxeiwn

FILE *f2, *f3;

//metavliti opoy mas voithaei gia thn diaxririsi tou mh ascii arxeiou

int fn1;

//dimiourgia tou struct

struct farmaka{
    char farname[51];
    int eisagomeno;
    int stock;
    int secstock;
    float price;
};

//dhlwsh pinaka typou  struct farmaka

struct farmaka farmako[15];

//synarthsh opou kataxwroume times sto file1

void test();

//synarthsh opou anoigei ta 3 arxeia ths askhshs

void openfile()
{
    fn1 = open(file1,0);
    f2 = fopen(file2,"w");
    f3 = fopen(file3,"w");
    
    //elegxos an to arxeio farmaka.dbs anoigei 
    
    if(fn1==-1){
        printf("farmaka.dbs not opened");
        exit(0);
    }

	//elegxos an to arxeio statistika.txt anoigei 
	
    if(f2==NULL){
        printf("statistika.txt not opened");
        exit(0);
    }

	//elegxos an to arxeio paraggelia.txt anoigei 
	
    if(f3==NULL){
        printf("paraggelia.txt not opened");
        exit(0);
    }
}

//synarthsh opou klinei ta 3 arxeia ths askhshs

void closefile()
{
    close(fn1);
    fclose(f2);
    fclose(f3);
}

//synarthsh opou ypologizei ta ervthmata tis askhseis

void farmaka()
 {
	//dhlwsh twn metavliwtn
	
	struct farmaka farm;
    int position1,g1,i,k1,k2;
    long pos1;
    int eisagomenocounter = 0;
    int farmakacounter = 0;
    float pososto;
    k1 = 1;
	k2 = 16;

	//mynhmata poy bgazei sto arxeio paraggelia.txt na emfanizetai kompsa ston xrhsth
	fprintf(f3,"\n\tOnoma farmakwn kai h elaxisth posothta poy prepei na paragelthei:\n");
	fprintf(f3,"\n-----------------------------------------------------------------------------------------\n\n");
	
    while (!eof(fn1) && (k1 <= k2)) 
	{
        // ypologismos tou deikth sto arxeio 1
		pos1 = (long) ((k1 - 1) * sizeof(struct farmaka));            
        
		// Metakinisa to deikti , 0 ksekinaei apto thn arxh toy arxeioy
		position1 = lseek(fn1, pos1, SEEK_SET);                     
        
		// diavazei thn eggrafi sto mh ascii arxeio
		g1 = read(fn1, &farm, sizeof(struct farmaka));         

		//ASKHSH 1
		//elegxei an to farmako einai eisagomeno(dhladh exei timh ish me 1 ) kai an isxyei ayth h synthiki ayksanei ton counter kata 1
		//kai ypologizei to plithos twn eisagomenwn farmakwn
		if(farm.eisagomeno==1)
		{
			eisagomenocounter++;
		}

        //elegxei an to farmako exei timh megalyterh tou 100 kai an isxyei ayth h synthiki ayksanei ton counter kata 1
        
		if(farm.price > 100)
		{
			farmakacounter++;
		}
		
		//ASKHSH 2
		
		//elegxei an to apothema tou farmakou einai mikrotero apo to apothema asfaleias
		
		if(farm.stock < farm.secstock)
		{
			
			//an isxyei h synthiki ayth typwnei sto arxeio to poso twn farmakvn pou prepei na ginei paragelia sto arxeio paragelia.txt
			
			fprintf(f3, "\nto farmako %s : %d kommatia", farm.farname,farm.secstock - farm.stock);
		}
		//aykshsh kata ena na paei sthn epomenh eggrafh
		k1++;
    }
    
    //ypologismos tou posostou farmakvn poy exoun timh panw apo 100 eyrw gia thn  ASKHSH 1
    pososto = ((farmakacounter*100)/k2);
    
	//ektypwnei sto arxeio statistika.txt to plithos twn eisagomenvn farmakwn 
	
	fprintf(f2,"\nO arithmos twn eisagomenwn  farmakwn einai:%d\n",eisagomenocounter);
	
	//ektypwnei sto arxeio statistika.txt to pososto farmakvn pou exoun timh megalyterh twn 100 eyrw
	
	fprintf(f2,"\nTo pososto twn farmakwn poy h timh toys einai panw apo 100 eyrw einai:%.2f %c\n",pososto, 37);
	
}

//h main opou mesa ginetai h klhsh twm synarthsewn pou ftiaksame gia thn ektelesh ths askhshs

int main(int argc, char *argv[])
{
    test();
    openfile();
    farmaka();
    closefile();
    return 0;
}

//synarthsh opou kanoume tis eggrafes farmakvn sto farmaka.dbs

void test()
{
    int i;
    
	//anoigei to arxeio file1
	fn1 = open(file1, _O_CREAT|_O_RDWR);
	
	//symplirwnoume to struct gia to kathe farmako ksexwrista
    
    // farmako1
    strcpy(farmako[0].farname, "farmako1");
    farmako[0].eisagomeno=0;
    farmako[0].stock=41;
    farmako[0].price=112;
    farmako[0].secstock=50;

    //farmako 2
    strcpy(farmako[1].farname, "farmako2");
    farmako[1].eisagomeno=0;
    farmako[1].stock=47;
    farmako[1].price=79;
    farmako[1].secstock=50;

    //farmako 3
    strcpy(farmako[2].farname, "farmako3");
    farmako[2].eisagomeno=0;
    farmako[2].stock=64;
    farmako[2].price=132;
    farmako[2].secstock=50;

    //farmako 4
    strcpy(farmako[3].farname, "farmako4");
    farmako[3].eisagomeno=1;
    farmako[3].stock=75;
    farmako[3].price=19;
    farmako[3].secstock=50;

    //farmako 5
    strcpy(farmako[4].farname, "farmako5");
    farmako[4].eisagomeno=0;
    farmako[4].stock=35;
    farmako[4].price=23;
    farmako[4].secstock=50;

    //farmako 6
    strcpy(farmako[5].farname, "farmako6");
    farmako[5].eisagomeno=0;
    farmako[5].stock=57;
    farmako[5].price=12;
    farmako[5].secstock=50;

    //farmako 7
    strcpy(farmako[6].farname, "farmako7");
    farmako[6].eisagomeno=1;
    farmako[6].stock=69;
    farmako[6].price=104;
    farmako[6].secstock=50;

    //farmako 8
    strcpy(farmako[7].farname, "farmako8");
    farmako[7].eisagomeno=1;
    farmako[7].stock=52;
    farmako[7].price=9;
    farmako[7].secstock=50;

    //farmako 9
    strcpy(farmako[8].farname, "farmako9");
    farmako[8].eisagomeno=0;
    farmako[8].stock=20;
    farmako[8].price=34;
    farmako[8].secstock=50;

    //farmako 10
    strcpy(farmako[9].farname, "farmako10");
    farmako[9].eisagomeno=1;
    farmako[9].stock=60;
    farmako[9].price=13;
    farmako[9].secstock=50;


	// farmako11
    strcpy(farmako[10].farname, "farmako11");
    farmako[10].eisagomeno=0;
    farmako[10].stock=70;
    farmako[10].price=10;
    farmako[10].secstock=50;
    
    // farmako12
    strcpy(farmako[11].farname, "farmako12");
    farmako[11].eisagomeno=1;
    farmako[11].stock=31;
    farmako[11].price=14;
    farmako[11].secstock=50;
    
    // farmako13
    strcpy(farmako[12].farname, "farmako13");
    farmako[12].eisagomeno=1;
    farmako[12].stock=81;
    farmako[12].price=109;
    farmako[12].secstock=50;
    
    // farmako14
    strcpy(farmako[13].farname, "farmako14");
    farmako[13].eisagomeno=1;
    farmako[13].stock=33;
    farmako[13].price=8;
    farmako[13].secstock=50;
    
    // farmako15
    strcpy(farmako[14].farname, "farmako15");
    farmako[14].eisagomeno=0;
    farmako[14].stock=51;
    farmako[14].price=44;
    farmako[14].secstock=50;
    
    // farmako16
    strcpy(farmako[15].farname, "farmako16");
    farmako[15].eisagomeno=1;
    farmako[15].stock=42;
    farmako[15].price=17;
    farmako[15].secstock=50;

	//egraffh twn parapanw sto arxeio farmaka.dbs
	
    for ( i = 0; i <= 15 ; ++i)
    {
        write(fn1, &farmako[i], sizeof(struct farmaka));
    }

	//kleinoume to arxeio file1
    close(fn1);
}
