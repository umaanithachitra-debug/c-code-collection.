#include<stdio.h>
int main()
{
	int a[10],n,num,i,p;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter %d elements in array",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter array elements before delete");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter position to delete");
	scanf("%d",&p);
	for(i=p;i<n;i++){
		a[i]=a[i+1];
	}

	for(i=0;i<=n;i++){
		printf("\n %d",a[i]);
	}
	return 0;
	
	
}
