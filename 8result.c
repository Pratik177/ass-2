//wap to read a percentage scored by a students and print the corresponding division
#include<stdio.h> 
 int main() 
{ 
 float a; 
 printf("Enter percentage scored:"); 
 scanf("%f",&a); 
 if (a>79) 
 { 
 printf("Distinction"); 
 } 
 else if(a>60 && a<79) 
 { 
 printf("First divison"); 
 } 
 else if(a>50 && a<60) 
 { 
 printf("Second divison"); 
 } 
 else if(a>40 && a<50) 
 { 
 printf("Third divison"); 
 } 
 else if(a<40) 
 { 
 printf("Fail"); 
 }  
 return 0;
 }
