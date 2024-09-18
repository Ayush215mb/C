//WAP to print the sum of digits and reverse of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the valueof n: ");
    scanf("%d",&n);
    int sum=0,rev=0;

    while(n!=0)
    {
        int ld= n%10;
        n=n/10;
        rev=rev*10;
        rev=rev+ld;
        sum=sum+ld;
    }
    printf("The sum of the digits of the given number is %d \n",sum);
    printf("The reverse of the given number is %d",rev);
}