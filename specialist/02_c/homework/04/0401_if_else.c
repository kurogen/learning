#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("Введите число\n");
	scanf("%d",&x);
	if (x > 0) printf("positive");
	else if (x < 0) printf("negative");
	else printf("zero");
	return 0;
}