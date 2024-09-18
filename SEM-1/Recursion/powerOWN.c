#include<stdio.h>

int power(int a,int b,int c)
{
    if(b==0)
    {
        return c;
    }

    power(a,b-1,a*c);
}

int main()
{
    int x,y;
    printf("Enter the base number: ");
    scanf("%d",&x);

    printf("Enter the power: ");
    scanf("%d",&y);

    printf("the ans will be: %d",power(x,y,1));

}