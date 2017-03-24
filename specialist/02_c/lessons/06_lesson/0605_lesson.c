//рекурсия

#include <stdio.h>
#include <stdlib.h>

int f (int x)

{	
	x++;
	if(x<10) x=f(x);
	
	return 0;
}

//algolist.manual.ru