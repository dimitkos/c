#include <stdio.h>

int findmax(int pin[5][5]);
int findmin(int pin[5][5]);
float findaverage(int pin[5][5]);
int max_n_times(int pin[5][5]);
int numbersabove(int k);

int pinakas[5][5]={{5,-2,-4,7,0},{16,1,12,9,-2},{1,-6,0,5,-3},{10,-4,5,4,7},{-1,3,-5,14,10}};
int knum;

main()
{
	

	int megisto,elaxisto,arithmosmegistou,numbers,i,j;
	float mesos_oros;
	
	/*ektiposh tou pinaka sthn konsola*/
	
	printf("o pinakas einai:\n\n");
	for (i=0; i<5 ; i++)
	{
		for (j=0; j<4;j++)
			printf("%d\t",pinakas[i][j]);
		printf("%d",pinakas[i][4]);
		printf("\n\n");
	}
	
	
	
	
	/*ypologismos megistou*/
	
	megisto=findmax(pinakas);
	printf("to megisto einai: %d",megisto);
	
	/*ypologismos elaxistou*/
	
	elaxisto=findmin(pinakas);
	printf("\n\nto elaxisto einai: %d",elaxisto);
	
	/*ypologismos mesou orou*/
	mesos_oros=findaverage(pinakas);
	printf("\n\no mesos oros ton stoixeivn tou pinaka einai: %f",mesos_oros);
	
	/*ypologismos poses fores emfanizetai o megistos sta stoixeia toy pinaka*/
	
	arithmosmegistou=max_n_times(pinakas);
	printf("\n\no megistos oros ton stoixeivn tou pinaka emfanizetai: %d fores",arithmosmegistou);
	
	/*ypologismos posoi arithmoi apo ta stoixeia tou didiastatou pinaka einai megalyteroi apo enan arithmo poy dinei o xrhsths */
	
	printf("\n\ndose mou mia timh akeraiou na thn sygkrinv me ta stoixeia toy pinaka:");
	scanf("%d",&knum);
	numbers=numbersabove(knum);
	printf("\n\n%d arithmoi tou pinaka einai megalyteroi apo ton arithmo poy dosate\n",numbers);
	
	
	
}

/*synarthsh pou mas ypologizei to megisto tou didiastatou pinaka*/

int findmax(int pin[5][5])
{
	int i,j,max;
	
	max=pin[0][0];
	
	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ;j++)
		{ if (pin[i][j]>max)
			max=pin[i][j];
		}
	}
	
	return max;
		
}

/*synarthsh pou mas ypologizei to elaxisto tou didiastatou pinaka*/

int findmin(int pin[5][5])
{
	int i,j,min;
	
	min=pin[0][0];
	
	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ;j++)
		{ if (pin[i][j]<min)
			min=pin[i][j];
		}
	}
	
	return min;
		
}

/*synarthsh pou mas ypologizei to meso oro ton stoixeivn tou didiastatou pinaka*/

float findaverage(int pin[5][5])
{
	int i,j,sum;
	float mo;
	sum=0;
	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ;j++)
		sum=sum+pin[i][j];
	}
	mo=(float)(sum)/(float)(25);
	return mo;
}

/*synarthsh pou mas ypologizei h megisth timh poses fores emfanizetai sta stoixeia tou didiastatou pinaka*/

int max_n_times(int pin[5][5])
{
	int i,j,ntimes;
	ntimes=0;

	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ;j++)
		{
		if(pinakas[i][j]==findmax(pinakas))
			ntimes=ntimes+1;
		}
	}
	return ntimes;
}

/*synarthsh pou mas ypologizei otan tis dosoume mia timh  posoi arithmoi einai megalyteroi apo ta stoixeia tou didiastatou pinaka*/

int numbersabove(int k)
{
	int i,j,counter;
	
	counter=0;
	
	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ;j++)
		{
			if(pinakas[i][j]>knum)
			counter=counter+1;
		}
	}
	return counter;
}





