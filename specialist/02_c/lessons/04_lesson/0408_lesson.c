#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, S=0, i;
	printf("n? ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) S+=i;
	printf("summa = %d\n", S);
	return 0;
}