#include <stdio.h>
#define SIZE 1000

char *mystrcpy(char *dest,char *src);

main()
{
	char str1[SIZE],str2[SIZE],str3[SIZE];
	int epilogi;
	
	//o xrhsths dinei 2 symvoloseires
	
	printf("dose thn 1h symvoloseira:");
	gets(str1);
	
	printf("dose thn 2h symvoloseira:");
	gets(str2);
	
	//o xrhsths epilegei poia apo tis dyo symvoloseires thelei na antigrafei
	

	do
	{
		printf("epelekse poia symvoloseira thes na antigrafei(1 h 2)):");
		scanf("%d",&epilogi);
	}
	while(epilogi<1 || epilogi>2);



	
	if (epilogi==1)
		mystrcpy(str3,str1);
	else if (epilogi==1)
		mystrcpy(str3,str2);
		
	//ginetai ektypvsh kai tvn trivn symvoloseirvn
		
	printf("\n\nh prvth symvoloseira einai:%s\nh deyterh symvoloseira einai:%s\nh trith symvoloseira einai:%s",str1,str2,str3);
	
}


//synarthsh opou antigrafei thn symvoloseira src sthn symvoloseira dest

char *mystrcpy(char *dest,char *src)

{
	int i;
	
	while(1)
	{
		dest[i]=src[i];
		if (src[i]=='\0')
			break;
		
		i++;
	}
		return dest;
	
}
