//Сложить числа в файле
#include <stdio.h>
#include <stdlib.h>

int FSumN(FILE*);
int FSumTotal(FILE*);

int main()
{
    FILE *file;
    file=fopen("data.txt","r");
    if(file==NULL)
    {
        printf("No file!\n");
        return 100;
    }
    
    printf("Summa = %d\n",FSumN(file));
    fseek(file,0,0);                          //  функция перемещения по файлу (смещение в байтах) fseek(file,offset,origin)
                                                //  offset - откуда считать офсет
                                                
                                                //  0 SEEK_SET - 
                                                //  1 SEEK_CUR - относительно текущей позиции
                                                //  2 SEEK_END - в конец
    printf("Summa = %d\n",FSumTotal(file));
    fclose(file);
    return 0; 
}

int FSumN(FILE *f)
    {
        int i,n,s=0,t;
        fscanf(f,"%d",&n);
        for(i=0;i<n;i++)
        {
            fscanf(f,"%d",&t);
            s+=t;
        }
    return s; 
    }

int FSumTotal(FILE *f)
{
    int s=0,t;
    while(!feof(f))
    {
        fscanf(f,"%d",&t);
        s+=t;
    }
    return s;
}