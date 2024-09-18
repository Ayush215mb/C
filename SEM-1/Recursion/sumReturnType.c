#include<stdio.h>
int sum(int a,int b,int c)
{
    if(a==0)
    {
        return b;
    }

    sum(a-1, a+b,c);
}

int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    int j= sum(m,0,m);

    printf("The sum of digits of is %d",j);

}
