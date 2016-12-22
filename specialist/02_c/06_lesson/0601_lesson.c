#include <stdio.h>
#include <stdlib.h>

int Sum(int a,int b)
{
	return a+b;
}

int main()
{
	printf("Summa = %d\n", Sum(1,2));
	
	return 0;
}



/*#include <stdio.h>
#include <stdlib.h>

int Sum(int a,int b)
{
	return a+b;
}

int main()
{
	int a=1,b=2;										// Локальные переменные
	printf("Summa = %d\n", Sum(1,2));
	
	return 0;
}
*/