#include<stdio.h>
int factorial(int n)
{
    if(n==1 || n==0) return 1;
    return n * factorial(n-1);
}

int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    int c= factorial(m);

    printf("The factorial of %d is %d\n",m,c);
    return 0;
    
}