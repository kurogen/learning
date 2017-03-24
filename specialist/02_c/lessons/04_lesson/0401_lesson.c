#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nday;
	printf("Введите день недели:\n");
	scanf("%d", &nday);
	switch(nday)
	{
		case 1: printf("Monday\n"); break;
		case 2: printf("Tuesday\n"); break;
		case 3: printf("Wednesday\n"); break;
		case 4: printf("Thursday\n"); break;
		case 5: printf("Friday\n"); break;
		case 6: printf("Saturday\n"); break;
		case 7: printf("Sunday\n"); break;
		default: printf("Wrong day number\n"); break;
	}
	return 0;
}