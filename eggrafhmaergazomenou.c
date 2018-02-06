//programma to opoio me thn voitheia struct kanoume mia eggrafh me ta stoixeia enow ergazomenou kai hmeromhnia gennhshs

#include <stdio.h>

//ftiaxnoume ta aparaithta structs

struct date {
	int day;
	int month;
	int year;
};

struct person {
	char name[80];
	char surname[80];
	struct date gennisi;
};

main()
{
	//dilwsh metavlhths typou struct
	
	struct person p;
	
	//zhtame ta stoixeia tou ergazomenou apo ton xrhsth
	
	printf("dwse to onoma tou ergazomenou:");
	scanf("%s",p.name);
	
	printf("dwse to epitheto tou ergazomenou:");
	scanf("%s",p.surname);
	
	printf("dwse thn hmera gennhshs tou ergazomenou:");
	scanf("%d",&p.gennisi.day);
	
	printf("dwse ton mhna gennhshs tou ergazomenou:");
	scanf("%d",&p.gennisi.month);
	
	printf("dwse ton xrono gennhshs tou ergazomenou:");
	scanf("%d",&p.gennisi.year);
	
	//ektypvsh ths eggrafhs
	
	printf("\n%s %s (%d/%d/%d)",p.name,p.surname,p.gennisi.day,p.gennisi.month,p.gennisi.year);
	
}
