//programma to opoio ypologizei thn eykleidia apostasi

#include <stdio.h>
#include <math.h>

struct point {
	float x;
	float y;
};


void read_point(struct point *p);

float euklidia_apostash(struct point a,struct point b);


main()
{
	
	struct point a,b;
	
	printf("prwto shmeio:\n");
	read_point(&a);
	
	printf("deytero shmeio:\n");
	read_point(&b);
	
	printf("h eykleidia apostash twn dyo shmeivn pou edwses einai:%.2f",euklidia_apostash(a,b));
	
	
	
}

//synarthsh h opoia zhtaei apo ton xrhsth na dwsei tis syntetagmenes

void read_point(struct point *p)
{
	printf("dwse thn timh ths x syntetagmenhs:");
	scanf("%f",&(p->x)); // h mporw na to grapsw &((*p).x)
	
	printf("dwse thn timh ths y syntetagmenhs:");
	scanf("%f",&(p->y)); // h mporw na to grapsw &((*p).y)
}

//synarthsh h opoia ypologizei thn eykleidia apostash

float euklidia_apostash(struct point a,struct point b)
{
	float euk;
	
	euk=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
	
	return euk;
}
