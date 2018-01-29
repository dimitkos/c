/*��������� �� ����� ���� ��� ��� ������ �� ����� ��� �������� ��� ������ ����� ��� �� ����� ��� ����� ��� �� ������� �� �������� ��������*/
//���� �������� ������ ����� �������� ���� � ������� ������ �� ���������� ��� �������,��� ��������,�� ���� ��� ����� ��� �� ���� ��� �� ���������

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
	
	//������������ ������ ��� ��� ������
	
	printf("Dwse to megethos tou pinaka: ");
	scanf("%d", &N);
		
	printf("Dwse tin arxi tou diastimatos tvn tyxaiwn: ");
	scanf("%d",&a);
		
	printf("Dwse to peras tou diastimatos tvn tyxaiwn: ");
	scanf("%d",&b);
		
	init_array(array, N, a, b);	
	
	//�������� ������	
		
	print_array(array, N);
	
	//�������� ����� ��������
	
	printf("\n\nMENOY EPILOGWN");
	printf("\n--------------");
	printf("\n1-Ypologismos tou megistou");
	printf("\n2-Ypologismos tou elaxistou");
	printf("\n3-Ypologismos tou mesou orou");
	printf("\n4-Eksodos");
	
	//� ������� ����� ������� �� ��������
	
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

//���������� ��� ������� ���� ������ �� �������� ��������

void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}


//���������� ��� ��������� ��� ������ �� ����� �����

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%d, ",pinakas[i]);
	printf("%d]",pinakas[n-1]);
}

//��������� ��� ������� �� ������� �������� ���� ������

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

//���������� ��� ���������� �� �������� �������� ���� ������

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

//��������� ��� ���������� ��� ���� ���

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

