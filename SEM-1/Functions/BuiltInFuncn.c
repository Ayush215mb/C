#include<stdio.h>
#include<math.h>
int main()
{
   int m;
   printf("Enter a number: ");
   scanf("%d",&m);

   float x=sqrt(m);

   float y=cbrt(m);

   printf("The sqr root of %d is %f\n",m,x);
   printf("The cube root of %d is %f\n",m,y);

   int a,b;

   printf("Enter the base: ");
   scanf("%d",&a);
   
   printf("Enter the power: ");
   scanf("%d",&b);

   int p= pow(a,b);

   printf("%d is raised to the pwer of %d is %d",a,b,p);

}

