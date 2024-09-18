//WAP to print the product of all digits of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int product=1;

    while(n!=0)
    {
        int ld=n%10;
        n=n/10;
        product=product*ld;
    }

    printf("The product of the digits of the given number is %d",product);
}