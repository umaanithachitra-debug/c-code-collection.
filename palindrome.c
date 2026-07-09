#include<stdio.h>
#include<math.h>
int main()
{
	int oriNum,revNum=0,tempNum;
	printf("enter a num");
	scanf("%d",&oriNum);
	tempNum=oriNum;
	while(tempNum);
	{int cur_digit;
	    cur_digit=tempNum%10;
		revNum=revNum*10+ cur_digit;
		tempNum=tempNum/10;
	}
	if(oriNum==tempNum)printf("palidrome");
	else printf("not palindrome");
	return 0;
}
