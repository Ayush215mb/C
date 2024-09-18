#include<stdio.h>
int main()
{
    int j=1;
    printf("%d ",j);//prints any random number(garbage value) everytime

    while(j<=10)
    {printf("%d  ",j);
    j++;
    }
}