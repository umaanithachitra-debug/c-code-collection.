//data types int, float,char, string
#include<stdio.h>

int main()
{
 int a;
 float b;
 char ch;
 char st[13];
 printf("enter a integer\n");
 scanf("%d",a);
 printf("enter a float number\n"); 
 scanf("%f",b);
 printf("enter a character\n");
 scanf(" %c",ch);
 printf("enter a string\n");
 scanf("%s",st);
 printf("%d\n%f\n%c\n%s",a,b,ch,st);
 return 0;
}
