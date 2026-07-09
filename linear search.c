#include<stdio.h>
int main()
{
	int a[20],key,n,i,found=0,position;
	printf("enter no element in array");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	printf("\n enter element to search");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
		
		found=1;
		position =i; 
		}
	}
	if(found==1)printf("element found at index %d",position);
	else printf("element not found");
}
