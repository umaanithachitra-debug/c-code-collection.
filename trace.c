#include<stdio.h>
int main(){
	int i,j,r;
	printf("enter no of rows/columns");
	scanf("%d",&r);
	int a[r][r];
	printf("enter ele in matrix");
	for(i=0;i<r;i++){
	for(j=0;j<r;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<r;i++){
	
		int sum=sum+a[i][i];
	for(i=0;i<r;i++)
		printf("%d",sum);
	return 0;
}
}
}
