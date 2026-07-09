#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],i,j,k;
	printf("enter ele into matrix a");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter ele into matrix b");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	}
	printf("matix multiplication is \n");
	for(i=0;i<2;i++)
	{for(j=0;j<2;j++){
	
		c[i][j]=0;
		for(k=0;k<2;k++){
	
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	}
	for(i=0;i<2;i++)
	{for(j=0;j<2;j++){

	printf("%d",c[i][j]);
	}
	printf("\n");
	}return 0;
	
	
}
