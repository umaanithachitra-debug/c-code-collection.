
#include<stdio.h>
int main(){
	int i,j,n ,spc;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(spc=1;spc<=n-i;spc++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

