#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celcius=(fahrenheit-32)/1.8;
	printf("temperature in celcius:%.2f",celcius);
	return 0;
	
}
