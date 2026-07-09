#include<stdio.h>
int main()
{int i;
	int a[5]={1,4,5,6,7};
	for(i=0;i<5;i++)
		printf("%d \n",a[i]);
	a[2]=10;
	for(i=0;i<5;i++)
	{
	printf("%d \n",a[i]);
	}
	
	return 0;
}
