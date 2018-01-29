/*προγραμμα το οποιο ζητα απο τον χρηστη να δωσει την διασταση του πινακα καθως και το ευρος των τιμων που θα γεμισει με τυχαιους αριθμους*/
//στην συνεχεια βγαζει μενου επιλογων οπου ο χρηστης μπορει να υπολογισει τον μεγιστο,τον ελαχιστο,το μεσο ορο καθως και να βγει απο το προγραμμα

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);

void print_array(int *pinakas, int n);

int max_array(int *pinakas, int n);

int min_array(int *pinakas, int n);

float mo_array(int *pinakas,int n);

main()
{
	int array[SIZE],N;
	int choice,a,b;
	
	//αρχικοποιηση πινακα απο τον χρηστη
	
	printf("Dwse to megethos tou pinaka: ");
	scanf("%d", &N);
		
	printf("Dwse tin arxi tou diastimatos tvn tyxaiwn: ");
	scanf("%d",&a);
		
	printf("Dwse to peras tou diastimatos tvn tyxaiwn: ");
	scanf("%d",&b);
		
	init_array(array, N, a, b);	
	
	//εκτυπωση πινακα	
		
	print_array(array, N);
	
	//εμφανιση μενου επιλογων
	
	printf("\n\nMENOY EPILOGWN");
	printf("\n--------------");
	printf("\n1-Ypologismos tou megistou");
	printf("\n2-Ypologismos tou elaxistou");
	printf("\n3-Ypologismos tou mesou orou");
	printf("\n4-Eksodos");
	
	//ο χρηστης ειναι ετοιμος να επιλεξει
	
	choice=1;
	
	while (choice!=5)
	{
		printf("\n\nParakalw kante thn epilogh sas:");
		scanf("%d", &choice);
		
						
		if (choice==1)
		{
			printf("O megistos einai: %d", max_array(array, N));
		}
		
		else if (choice==2)
		{
			printf("O elaxistos einai: %d", min_array(array, N));
		}
		
		else if (choice==3)
		{
			printf("O mesos oros einai: %.2f", mo_array(array, N));
		}
		
		else if (choice==4)
		{
			printf("Bye Bye!!");
			break;
			
		}	
				
	}
}

//συνασρτηση που γεμιζει εναν πινακα με τυχαιους αριθμους

void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}


//συναρτησει που εκτυπωνει τον πινακα σε κομψη μορφη

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%d, ",pinakas[i]);
	printf("%d]",pinakas[n-1]);
}

//συναρτηση που βρισκει το μεγιστο στοιχειο ενος πινακα

int max_array(int *pinakas, int n)
{
	int i,max;
	
	max=pinakas[0];
	
	for (i=1; i<n; i++)
	{
		if (pinakas[i]>max)
			max=pinakas[i];
	}
	
	return max;
}

//συναρτησει που υπολογιζει το ελαχιστο στοιχειο ενος πινακα

int min_array(int *pinakas, int n)
{
	int i,min;
	min=pinakas[0];
	for (i=1; i<n; i++)
	{
		if (pinakas[i]<min)
			min=pinakas[i];
	}
	
	return min;
}

//συναρτηση που υπολογιζει τον μεσο ορο

float mo_array(int *pinakas,int n)
{
	int i,sum;
	float mo;
	sum=0;
	for (i=0;i<n; i++)
	{
		sum=sum+pinakas[i];
	}
	mo=(double)(sum)/(double)(n);
	return mo;
}

