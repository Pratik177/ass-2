o//wap to use a arthematic operator by using switch
#include<stdio.h> 
int main() 
{ 
 int a,b,result; 
 printf("Enter two numbers:\n"); 
 scanf("%d%d",&a,&b); 
 char c; 
 printf("Enter arithematic operator\n"); 
 scanf(" %c",&c); 
 switch(c) 
 { 
 case '*': 
 result=a*b; 
 break; 
 case '/': 
 result=a/b; 
 break; 
  case '%': 
 result=a%b; 
 break; 
 case '+': 
 result=a+b; 
 break; 
 case '-':
 result=a-b;
 break; 
 } 
 printf("%d%c%d is %d",a,c,b,result); 
return 0;
}
