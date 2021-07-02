//wap to read a 3 digit an find weather it is armstrong or not.
#include<stdio.h>
int main()
{
 int a,b, c ,n,s;
 printf("enter a three digit number");
 scanf("%d",&n);
 a=n/100;
 b=(n%100)/10;
 c=n%10;
 	s=(a*a*a+b*b*b+c*c*c);
 	if (n==s)
 	{
 	printf("%d is armstrong number",n);
 	}
 else 
 {
 printf("%d is not a armstrong number",n);
 }
  return 0;
 
}
