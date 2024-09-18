//WAP to print the sum of digits of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a nunber: ");
    scanf("%d",&n);

    int sum=0;

    while(n!=0)
    {
        int ld=n%10;//n%10 gives tha last digit of the nukmber
        n=n/10;
        sum=sum+ld;
    }
    printf("The sum of digits of the given number is %d",sum);
}
