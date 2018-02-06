//programma to opoio desmeyei dynamika enan pinaka apo epafes opou o xrhsths eisagei tis epafes
//tis apothikeyei se enan pinaka epafvn kai tis typwnei

#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 1000

struct epafi{
	char name[STRSIZE];
	char phone[STRSIZE];
};

main()
{
	struct epafi *pinakas;
	int i,N;
	
	//zhtaei apo ton xrhsth ton arithmo twn epafwn
	
	do
	{
		printf("dwse ton arithmo twn epafwn:");
		scanf("%d",&N);
		system("cls");
	}
	while(N<1);
	
	//desmeysi mnhmhs dynamika
	
	pinakas=malloc(sizeof(struct epafi)*N);
	
	if(pinakas==NULL) //elegxos an demsytike h mnhmh h apetyxe
	{
		printf("apotyxia desmeyshs mnhmhs");
		exit(0);
	}

	//diavasma epafwn
	
	fflush(stdin);
	
	for(i=0 ; i<N ;i++)
	{
		printf("dwse to onomo tou %d-ou atomou:",i+1);
		gets(pinakas[i].name);
		
		printf("dwse to thlefwno tou %d-ou atomou:",i+1);
		gets(pinakas[i].phone);
		
	}
	
	//ektypwsh twn epafwn
	
	printf("\n\nEPAFES\n=========================");
	
	for (i=0 ; i<N ;i++)
	{
		printf("\n%d %s (%s)",i+1,pinakas[i].name,pinakas[i].phone);
	}
	
	//apodesmeysh ths mnhmhs
	
	free(pinakas);
	
	
	
}







