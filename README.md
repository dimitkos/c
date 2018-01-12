#include <stdio.h>
#include <math.h>

int rizes(float a,float b,float c,float *x1,float *x2);

main()
{
	float a,b,c,riza1,riza2;
	int plithos;
	
	printf("dose mou to a: ");
	scanf("%f",&a);
	
	printf("dose mou to b: ");
	scanf("%f",&b);
	
	printf("dose mou to c: ");
	scanf("%f",&c);
	
	plithos=rizes(a,b,c,&riza1,&riza2);
	
	if (plithos==0)
		printf("den exei pragmatikes rizes");
	else if (plithos==1)
		printf("exei diakrinoysa ish me mhden kai exei mia diplh riza %f:",riza1);
	else
		printf("exei dyo rizes thn x1:%f kai thn x2:%f",riza1,riza2);
	
	
	
	
}

int rizes(float a,float b,float c,float *x1,float *x2)
{
	float D;
	D=b*b-4*a*c;
	
	if (D<0)
		return 0;
	else if (D==0)
	{
		*x1=-b/(2*a);
		return 1;
	}
	else 
	{
		*x1=(-b+sqrt(D))/(2*a);
		*x2=(-b-sqrt(D))/(2*a);
		return 2;
	}
	
	
}
