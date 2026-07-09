#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("enter temp in celcius:");
	scanf("%f",&celcius);
	fahrenheit=(1.8*celcius)+32;
	printf("temperature in fahrenheit:%.6f",fahrenheit);
	
}
