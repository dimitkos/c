//programma to opoio kanei dynamikh desmeysh disdiastatou pinaka
//kai sthn synexeia ypologizei posa bytes apaitithikan gia thn apothikeysh tou pinaka kai na typvnei to apotelesma

#include <stdio.h>
#include <stdlib.h>

main()
{
	double **p; //Dilwsi diplou deikti-pinaka
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
	
	
	
	// Dynamiki Desmeysi mnimis 
	p=malloc(sizeof(double*)*M);
	if (!p) //elegxos an desmeythke h mnhmh h apetyxe
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}
	for (i=0; i<M; i++)
	{
		p[i]=malloc(sizeof(double)*N);
		if (!p[i]) //elegxos an desmeythke h mnhmh h apetyxe
		{
			printf("Adynamia desmeusis mnimis");
			exit(0);
		}
	}
	
	//  Ypologismoi poso mnhmh katalamvanei 
	//mnhmh monodiastatvn pinakwn+mnhmh gia ton pinaka deiktvn+mnhmh gia ton deikth pou deixnei ston pinaka deiktwn
	
	printf("o xvros pou desmeythke dynamika einai:%d+%d+%d=%d",M*N*sizeof(double),M*sizeof(double *),sizeof(double **),M*N*sizeof(double)+M*sizeof(double *)+sizeof(double **));


		
	// Apodesmeysi Mnimis 
	for (i=0; i<M; i++)
		free (p[i]);
	free(p);
}
