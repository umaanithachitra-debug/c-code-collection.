#include<stdio.h>
int main()
{
	float mat,eng,tel,hin,sci,total,avg;
	printf("enter marks ");
	scanf("%f%f%f%f%f",&mat,&eng,&tel,&hin,&sci);
	total=mat+eng+tel+hin+sci;
	avg=total/5.0;
	printf("total marks is %f",total);
	printf("avg is %f",avg);
	return 0;
}
