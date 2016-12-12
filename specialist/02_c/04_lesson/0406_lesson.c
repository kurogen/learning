#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
for(i=0; i<10; i++)
	{
	printf("%d\n",i);
	if(i==5) break;
	//printf("%d\n",i);
	}
	return 0;
}