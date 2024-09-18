//WAP to print the number of digits of a given number
#include<stdio.h>

int main()
{
    int a,flag=0;
    printf("Enter a positive number: ");
    scanf("%d",&a);

        while(a!=0)
    {
        a=a/10;
        flag++;
    }
    printf("It has %d digits",flag);
}