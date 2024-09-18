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

int ncr(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{    
    int n,r;

    printf("Enter the n: ");
    scanf("%d",&n);
    
    printf("Enter the r: ");
    scanf("%d",&r);

    int ans= ncr(n,r);
    printf("%d",ans);

}