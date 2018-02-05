//programma to opoio dexetai dyo lekseis kai meso mias synarthsh elegxei an aytew oi lekseis exoyn mikres xarakthres

#include <stdio.h>
#include <stdlib.h>
#define SIZE 150

#define TRUE 1
#define FALSE 0

int check_string(char *str);
int mystrcmp(char *str1,char *str2);
main()
{
	char str1[SIZE],str2[SIZE];
	int x;
	
	//dexetai dyo leskeis apo ton xrhsth kai elegxontai an apotelountai apo mikra grammata
	
	printf("dose moy thn prvth symvoloseira:");
	gets(str1);
	
	if(check_string(str1)==FALSE)
	{
		printf("lathos eisodos!");
		exit(0);       //termatizei viaia to programma an o xrhsths den valei mikra grammata
	}
	
	printf("dose moy thn deyetrh symvoloseira:");
	gets(str2);
	
	if(check_string(str2)==FALSE)
	{
		printf("lathos eisodos!");
		exit(0);        //termatizei viaia to programma an o xrhsths den valei mikra grammata
	}
	
	//kaleitai h syanrthsh kai typwnei to apotelsma ths syggrishs ston xrhsth
	x=mystrcmp(str1,str2);
	
	if (x==-1)
		printf("\nisxyei:%s < %s",str1,str2);
	else if (x==0)
		printf("\nisxyei:%s = %s",str1,str2);
	else 
		printf("\nisxyei:%s < %s",str2,str1);
	
	
}

//synarthsh pou elegxei an h leksh apoteleite apo mikra grammata

int check_string(char *str)
{
	int i;
	i=0;
	while(str[i] !='\0')
	{
		if(!(str[i]>='a' && str[i]<='z'))
		{
			return FALSE;
		}
		i++;
	}
	return TRUE;
}

//synarthsh pou dexetai dyo lekseis kai episterfei thn sygrish ayton ton 2
//-1 an str1<str2  0 an str1==str2  1 an str1>str2

int mystrcmp(char *str1,char *str2)
{
	int i;
	i=0;
	
	while(1)
	{
		
		if(str1[i]=='\0' && str2[i]!='\0')
		 //elegxei an h prwth leksh  exei teleiwsei enw h deytero oxi px abc,abcdef
			return -1;
		else if (str2[i]=='\0' && str1[i]!='\0')
		//elegxei an h deyterh leksh  exei teleiwsei enw h prwth oxi px abc,abcdef
			return 1;
		else if (str1[i]=='\0' && str2[i]=='\0')
			return 0;
			
		if(str1[i]<str2[i])
			return -1;
		else if(str1[i]>str2[i])
			return 1;
		i++;
	}
	
	
}



