//sum of elements in 2d arrays
#include<stdio.h>
int main()
{

	int a[10][10],b[10][10],c[10][10],i,j;

	printf("enter ele into matrix a");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter ele into matrix b");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	printf("addition of two matrices is \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
		}
	printf("enter ele in c matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{printf("%d",c[i][j]);
			}	printf("\n");
			
	}
	return 0;
}
