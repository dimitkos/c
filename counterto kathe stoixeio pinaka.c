#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int count_array(int *pinakas, int n,int x);

main()
{
	int pinakas[SIZE];
	int i,x,N=20;
	
	x=1+rand()%30;
	/* Arxikopoiisi enos pinaka 20 thesewn 
	   me tyxaious arithmous sto 1..30 */
	
	init_array(pinakas,N,1,30);
	
	/* Ektypwsi tou pinaka */
	printf("Pinakas Dedomenwn: \n");
	print_array(pinakas,N);
	printf("\n\n");

	for (i=0; i<N; i++)
	{
		x=pinakas[i];
		printf("\n\nTo plithos tvn emfanisevn %d  einai: %d",x, count_array(pinakas,N,x));
	}
	
	
}




void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%d, ",pinakas[i]);
	printf("%d]",pinakas[n-1]);
}

int count_array(int *pinakas, int n,int x)
{
	int i,count;
	
	count=0;
	
	for (i=0; i<n; i++)
	{
		if(pinakas[i]==x)
			count=count+1;
	}
		
	return count;
}
