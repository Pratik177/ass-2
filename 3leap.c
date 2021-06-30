//wap to read a year and check weather it is leap or not 
#include<stdio.h>

int main()
{
int a;
printf("enter the year \n");
scanf("%d",&a);
if (a<=100)
{
if (a%4 == 0) printf("%d is a leap year",a);

else
printf("is not a leap year");
}
if (a<=20000)
{
if (a % 400==0) printf("%d is a leap year",a);
else
printf("is not a leap year");
}
return 0;
}
