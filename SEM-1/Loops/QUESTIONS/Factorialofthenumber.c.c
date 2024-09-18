//print the factorial of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result=1;

    while(n!=0)
    {
        result=result*n;
        n=n-1;
    }
    printf("The factorial of the given number is %d",result);
}