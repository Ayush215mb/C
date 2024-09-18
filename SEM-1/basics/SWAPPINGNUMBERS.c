#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Enter a number: ");
    scanf("%d",&y);

    printf("The numbers are %d,%d\n",x,y);

    //swap--METHOD-1

    int a=x;
    x=y;
    y=a;

    printf("After swapping the numbers are %d,%d\n",x,y);

    //swap--METHOD-2

    x = x + y;
    y = x - y;
    x = x - y;


    printf("After swapping it again the numbers are %d,%d\n",x,y);
    
}