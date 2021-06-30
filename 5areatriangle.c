//wap to calculate the area of triangle given the length of its side
#include <stdio.h>
#include<math.h>

int main()
{
 	float a,b,c,s,A;
 	printf("enter a  three side of triange ");
 	scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  	if ((a+b)>c && (b+c)>a && (a+c)>b)
  	{
  	A=sqrt(s*(s-a)*(s-b)*(s-c));
  	printf("the area of triangle is %f",A);
  	}
  	else 
  	{
  	printf("the sum of two side of triangle must be greater than third side \n ");
  	}
  	return 0;
  	
}
