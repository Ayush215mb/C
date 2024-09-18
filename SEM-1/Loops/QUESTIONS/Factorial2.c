//print the factorial of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result=1;

    for(int i=1; i<=n; i++)
    {
        result=result*i;
        printf("The factorial of %d is %d\n",i,result);
    }
    
}