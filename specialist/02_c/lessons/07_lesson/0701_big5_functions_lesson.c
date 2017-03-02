/*
	BIG5
	Условия:
	В программу вводятся произвольные числа с клавиатуры.
	Кол-во вводимых чисел неизвестно.
	Вводимые числа запрещается хранить в оперативной памяти одновременно и запрашивать повторно.

	Задачи:
	Найти кол-во участков постоянства.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float prev,curr;
	int counter=0,flag=0;
	scanf("%f",&prev);
	while(scanf("%f",&curr))
	{
		if(prev==curr)
		{
			if(flag==0)
			{
				counter++;
				flag=1;
			}
		}
		else flag=0;
		curr=prev;
	}
	
	.....
	return 0;
}