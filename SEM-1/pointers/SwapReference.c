#include<stdio.h>

void swap(int* x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Enter a number: ");
    scanf("%d",&y);

    printf("The numbers are %d,%d\n",x,y);

    swap(&x,&y);


    printf("After swapping the numbers are %d,%d\n",x,y);
}