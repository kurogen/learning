/*
	BIG5
	Условия:
	В программу вводятся произвольные числа с клавиатуры.
	Кол-во вводимых чисел определяет пользователь.
	Вводимые числа запрещается хранить в оперативной памяти одновременно и запрашивать повторно.

	Задачи:
	1) Сумма введеных чисел.
	2) Кол-во чисел равных заданному.
	3) Max и Min значения среди введеных.
	4) Пусть числа не убывают. Найти сколько чисел разных и понять зачем это условие.
	5) Найти кол-во участков постоянства.																		// http://www.cyberforum.ru/c-beginners/thread371390.html
	6*) Вывести на экран первый n (первые сто) простых чисел.													// http://el-prog.narod.ru/pascal19.html
	7*) Найти номер последнего числа ближайшего к заданному.
*/

#include <stdio.h>
#include <stdlib.h>
//#include <iostream>															//Библиотека локализации С++
#include <locale.h>																//Библиотека локализации С

int main()
{	
	setlocale(0, "");
	int a;																		// Вводимое произвольное число (a)
	int I = 0;																	// Количество вводимых произвольных чисел (I)
	int	i = 0;																	// Счетчик для цикла (i)	
	int sum = 0;																// Cумма введеных чисел (sum)
	int n;																		// Заданное <<постоянное>> число (n)
	int N = 0;																	// Количество чисел равных заданному <<постоянному>> (n)
	int min;																	// Минимальное значение среди всех введеных произвольных чисел (min)
	int max;																	// Максимальное значение среди всех введеных произвольных чисел (max)
	int T = 0;																	// Количество уникальных чисел (T)
	int tmp;																	// Переменная, содержащая значение предыдущего произвольного числа (tmp)
	int P = 0;																		// Количество участков постоянства (P)
	
	// Количество вводимых чисел (I)
	printf("\nСколько всего чисел хотите ввести (I)? \nI = ");					// Запрос количества вводимых произвольных чисел (I)
	scanf("%d",&I);
	
	// Количество чисел равных заданному <<постоянному>> (n)
	printf("\nЗадайте <<постоянное>> число (n)? \nn = ");						// Запрос заданного <<постоянного>> числа (n)
	scanf("%d",&n);

	printf("\nВведите числа для суммирования (a): \n");
	printf("%d) ", i+1);														// Первый запрос ввода произвольного числа (a) за циклом
	scanf("%d", &a);
	sum += a;																	// Первая операция суммирования введенных чисел (sum)
		if (n == a)
			N ++;
				min = a;
				max = a;
					T ++;														// Cчетчик количества уникальных чисел (T)
					tmp = a;
	
	// Операции в цикле
	for(i = 1; i < I; i++)	
		{		
		printf("%d) ", i+1);
		scanf("%d", &a);														// Запрос произвольного числа в цикле (a)
		sum += a;																// Суммирование введенных чисел в цикле (sum)
		
			if (n == a)
			N ++;																// Счетчик количества введенных чисел равных заданному <<постоянному>> (N)
				
				if (min >= a)		
				min = a;														// Минимальное введенное число (min)
				
					if (max <= a)			
					max = a;													// Максимальное введенное число (max)
							
						if (tmp != a)			
						T ++;													// Cчетчик количества уникальных чисел (T)
						else
						P ++;
						
							//if (tmp == a)			
							//P ++;												// Счетчик количества участков постоянства (P)
							
						tmp = a;
		}
	
	// Вывод результатов
	printf("\nЗАДАНО - Количество введенных чисел: %d", I);
	printf("\nЗАДАЧА №1 - Cумма введеных чисел: %d", sum);
	printf("\nЗАДАЧА №2 - Количество чисел равных заданному <<постоянному>>: %d", N);
	printf("\nЗАДАЧА №3 - Минимальное введенное число: %d", min);
	printf("\nЗАДАЧА №3 - Максимальное введенное число: %d", max);
	printf("\nЗАДАЧА №4 - Количество уникальных чисел: %d", T);
	printf("\nЗАДАЧА №5 - Количество участков постоянства: %d", P);
	return 0;
}