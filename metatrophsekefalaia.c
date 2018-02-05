//programma poy metatrepei ta mikra grammata se kefalaia

#include <stdio.h>
#define SIZE 150

main()
{
	char str[SIZE];
	int i;
	
	printf("dose moy mia protash:\n");
	gets(str);
	
	i=0;
	
	while( str[i] !='\0')
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;	
		}
		i++;	
	}
	printf("\nh nea symvoloseira me kefalaia grammata einai:\n%s",str);
	
}
