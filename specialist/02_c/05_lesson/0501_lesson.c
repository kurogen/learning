#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 16

int main()
{
	char name[MAX_LEN];
	int i;
	printf("Input your name: ");
	for(i=0;i<MAX_LEN-1;i++)
	{
		name[i]=getchar();
		if(name[i]=='\n') break;
	}
	name[]='\0';
	ptint("Hello, %s!\n",name);
	
	return 0;
}