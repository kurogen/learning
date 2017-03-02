#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main()
{
    int m[SIZE];
    FILE *file;
    int i;
    for(i=0;i<SIZE;i++) m[i]=i+1;
    file=fopen("text.txt","w");
    for(i=0;i<SIZE;i++) fprintf(file,"%d ", m[i]);
    fclose(file);
    
	return 0;
}