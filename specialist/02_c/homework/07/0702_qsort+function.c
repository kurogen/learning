//	метод пузырька с модификацией
//	1) дописать main
//	2) добавить динамическое управление памятью

void sort(float m[],int n))

{

	int i,swap;
	float tmp;
	do
	{
		swap=0;
		for(i=0;i<n-1;i++)
		{
			if (m[i]>m[i+1])
			{
				tmp=m[i];
				m[i]=m[i+1];
				m[i+1]=tmp;
				swap=1;
			}
		}
	}
	while(swap);	//while(swap!=0)
	return;
	
}