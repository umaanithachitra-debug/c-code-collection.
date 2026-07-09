#include<stdio.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principal amount(p):");
	scanf("%f",&p);
	printf("enter time in year(t):");
	scanf("%f",&t);
	printf("enter rate in percent(r):");
	scanf("%f",&r);
	si=(p*r*t)/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("the si is:%.2f \n",si);
	printf("the ci is:%.2f",ci);
}
