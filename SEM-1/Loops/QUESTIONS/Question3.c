//WAP to print the sum of even digits of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int sum=0;

    while(n!=0)
    {
        int ld=n%10;
        n=n/10;
        if(ld%2==0)
        {
        sum=sum+ld;
        }

    }
    printf("The sum of even digits of the given number is %d",sum);

}