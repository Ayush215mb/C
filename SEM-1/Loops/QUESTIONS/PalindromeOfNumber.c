//WAP to print the sum of digits and reverse of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the valueof n: ");
    scanf("%d",&n);
    int rev=0;

    while(n!=0)
    {
        int ld= n%10;
        n=n/10;
        rev=rev*10;
        rev=rev+ld;
    }
    printf("The reverse of the given number is %d\n",rev);

    if(rev != n) printf("The number is not a palindrome.");
    else{
        printf("The number is a palindrome.");
    }
}