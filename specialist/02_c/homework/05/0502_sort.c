#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m[100];
	int i,n,s=0;
	//-------------------------------------------------------------------------1
	
	printf("n? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("m[%d]? ",i);
		scanf("%d",&m[i]);
	}
	
	//-------------------------------------------------------------------------2
	
	{
    int tmp, i, j, pos;
    for(i = 0; i < size; ++i) // i - номер текущего шага
    { 
        pos = i; 
        tmp = arr[i];
        for(j = i + 1; j < size; ++j) // цикл выбора наименьшего элемента
        {
            if (arr[j] < tmp) 
            {
               pos = j; 
               tmp = arr[j]; 
            }
        }
        arr[pos] = arr[i]; 
        arr[i] = tmp; // меняем местами наименьший с a[i]
    }
}
	
	//-------------------------------------------------------------------------3
	
	printf("%d",m[0]);
	for(i=1;i<n;i++) printf("+%d", m[i]);
	printf("=%d\n",s);
	
	return 0;
}