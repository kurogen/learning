/*
1) Добавить в стек элементы.
2) Удалить из стека элементы.
3) Вывести информацию об операциях.
*/



#define STACK_SIZE 1000
typedef int stack_t;

stack_t Stack[STACK_SIZE];
int pos;																		//	позиция последнего добавленого в стек элемента

//	Инициализация стека
int StackInit()
{
	pos=STACK_SIZE;
	return pos;																	//	возвращает сколько свободных мест
}

//	Заталкивание элементов
int StackPush(stack_t new_data)
{
	if(pos==0) return -1;
	else
	{
		pos--;
		Stack[pos]=new_data;
		return pos;																//	возвращает сколько свободных мест
	}
}

//	Выталкивание элементов
int StackPop()
{
	if(pos==STACK_SIZE) return pos;
	else
	{
		pos++;
		return pos;																//	возвращает сколько свободных мест
	}
}

int main()
{	
																				//	ДОПИСАТЬ MAIN
	
	return 0;
}



// http://learnc.info/adt/stack.html#fixed_size_stack