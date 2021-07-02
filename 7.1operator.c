//wap to read a 2 number and arthematic operation and perform a corresponding arthematic operaion.
#include<stdio.h>
int main() 
{ 
 int a,b,result; 
 char c; 
 printf("Enter two numbers:\n"); 
 scanf("%d%d",&a,&b); 
 printf("Enter arithematic operator\n"); 
 scanf(" %c",&c); 
 if (c=='*') 
 { 
 result = a * b; 
 } 
 else if (c=='/') 
 { 
 result = a / b; 
 } 
 else if (c=='+') 
 { 
 result = a + b; 
 } 
 else if (c=='-')
 { 
 result = a - b;
 } 
 else if (c=='%')  { 
 result = a % b; 
 } 
 printf("%d%c%d is %d",a,c,b,result); 
 return 0;
 }
