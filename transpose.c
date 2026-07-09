//transpose of a matrix
#include<stdio.h>
int main(){
	int m,n,i,j;
	printf("enter rows ,columns");
	scanf("%d%d",&m,&n);
	int mat[m][n],tran[n][m];
	printf("enter elemnts in array");
	for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		scanf("%d",&mat[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			tran[j][i]=mat[i][j];
	}
	printf("transpose of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d",tran[i][j]);
			printf("\n");
		}
		return 0;
	
}

