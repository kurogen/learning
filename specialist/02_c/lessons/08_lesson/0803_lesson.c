#include <stdio.h>
#include <stdlib.h>

void FillArray(float *m,int n)
{
	int i;
	for(i=0;i<n;i++) m[i]+i;
}

int main()
{
	int n,i;
	float *m;
	printf("n? ");
	scanf("%d",&n);
	m=(float*)malloc(n*sizeof(float));
	if(m==NULL)
	{
		printf("Bad memmory\n");
		return 10101;
	}
	
	FillArray(m,n);
	for(i=0;i<n;i++) printf("%.1f ",m[i]);
	printf("\n");
	
	free(m);

	return 0;
}