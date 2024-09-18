#include<stdio.h>
int factorial(int a)
{
    int m=1;
    while(a!=0)
    {
         m = a*m;
        a=a-1;
    }
    return m;
}

int npr(int n,int r)
{
    return factorial(n)/ factorial(n-r);
}
int main()
{    
    int n,r;

    printf("Enter the n: ");
    scanf("%d",&n);
    
    printf("Enter the r: ");
    scanf("%d",&r);

    int ans= npr(n,r);
    printf("%d",ans);

}