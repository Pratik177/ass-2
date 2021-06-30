//wap to find all poossible roots of quadratic equations 
#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,x,root1,root2;
	// to find all the possible root of quadratic equations ax^2+bx+c
	printf("enter a  number \n");
	scanf("%lf%lf%lf",&a,&b,&c);
 x=(b*b-4*a*c);
 /*condition for roots */
 //condition for real and different roots
 if (x>0)
 {
 root1=(-b+sqrt(x))/(2*a);
 root2=(-b-sqrt(x))/(2*a);
 printf("the roots are %lfand%lf",root1,root2);
 }
 //condition for equall roots 
	 else if(x==0)
	 {
 	   root1=root2=-b/(2*a);
 	    printf("the possible root is %lf\n",root1);
 	    }
 	
 	else if (x<0)
 	{
 	root1=(-b/(2*a));
 	root2=sqrt(-x/(2*a);
 printf("Real part of root is %lf and imaginary part of root is %lf",root1,root2);
 	}
 	
 	return 0;
}


