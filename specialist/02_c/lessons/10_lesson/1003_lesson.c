#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *file;
    file=fopen("data.txt","r");
    if(file==NULL)
    {
        printf("No file!\n");
        return 100;
    }
    
    fclose(file);
	return 0;
}