

#include <stdio.h>

void main()
 {
	
	/*dilosi metavlitwn */
	
	char name[20],temp,cpname[20];
	int i,j,size,loop;
	
	
	printf("Please give me your name!\n");
	gets(name);
	
	/*ypologismos mikous tou onomatos */
	
	int counter = 0;
	while (name[counter] != '\0') {
		counter++;
	}
	
	printf("Your name has %d characters\n\n", counter);
	
	/*antigrafh tou pinaka me to kanoniko onoma wste na antistrepsoume ton onoma sto prototypo pinaka */
	
	size = sizeof(name) / sizeof(name[0]);
	for (loop = 0; loop < size; loop++)
	{
		cpname[loop] = name[loop];
	}
	
	/*diadikasia antistrofhs tou onomatos poy dothike */
	
	j=counter-1;
	
	for(i=0; i<j ;i++)
	{
      temp = name[i];
      name[i] = name[j];
      name[j] = temp;
      
      j--;
      
   	}
	
	/*emfamish tou anestramenoy onomatos */
	
	printf("to onoma sas anestrameno einai %s\n\n",name);
	
	
	/*ektyposh xairetismou me to kanoniko onoma */
	
	printf("Thank you! %s\n",cpname);
	getchar();
}
