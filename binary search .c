//binary search with initialized sorted array
#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int key,i,low=0,high=9,mid=0,found=0;
	printf("enter a key");
	scanf("%d",&key);
	while(low<=high){
		mid=(high+low)/2;
		if(key==a[mid]){
			found=1;
			break;
		}
		else if(key<mid)
			high=mid-1;
		else
			low=mid+1;
	}	
	if(found==0 )printf("element not found");
	else printf("key was found at %d position",mid);
	return 0;

}
