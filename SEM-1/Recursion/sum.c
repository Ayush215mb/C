#include<stdio.h>
void sum(int a,int b,int c)
{
    if(a==0)
    {
        printf("The sum of digits of %d is %d",c,b);
        return;
    }

    sum(a-1, a+b,c);
}

int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    sum(m,0,m);

}
