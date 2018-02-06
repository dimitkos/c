//programma to opoio kanei dynamikh desmeysh disdiastatou pinaka

#include <stdio.h>
#include <stdlib.h>

main()
{
	int **p; //Dilwsi diplou deikti-pinaka
	int i,j,M,N; 
	
	// Diavasma Diastasewn Pinaka apo ton xrhsth opou ginetai elegxos tvn timvn poy vazei
	
	
	do
	{
		printf("Dwse to plithos twn grammwn tou pinaka: ");
		scanf("%d",&M);
		
	}
	while(M<2 || M>100);


	do
	{

		printf("Dwse to plithos twn stilwn tou pinaka: ");
		scanf("%d",&N);
	}
	while(N<2 || N>100);
	
	
	
	/* Dynamiki Desmeysi mnimis */
	p=malloc(sizeof(int*)*M);
	if (!p) //elegxos an desmeythke h mnhmh h apetyxe
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}
	for (i=0; i<M; i++)
	{
		p[i]=malloc(sizeof(int)*N);
		if (!p[i]) //elegxos an desmeythke h mnhmh h apetyxe
		{
			printf("Adynamia desmeusis mnimis");
			exit(0);
		}
	}
	
	/*  Ypologismoi ston pinaka */
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
		{
			p[i][j]=1+(i+j)*2;
			printf("%2d ",p[i][j]);	
		}
		printf("\n");
	}
		
	/* Apodesmeysi Mnimis */
	for (i=0; i<M; i++)
		free (p[i]);
	free(p);
}
