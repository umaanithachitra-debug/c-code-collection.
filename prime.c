#include<stdio.h>
int main()
{
	int n,i,factor_count=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)factor_count++;
	}
	if(factor_count==2)printf("prime number");
	else printf("not  a prime number");
}
