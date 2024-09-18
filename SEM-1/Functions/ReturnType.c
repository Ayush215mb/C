#include<stdio.h>

int min(int x,int y)
{
    if(x<y) return x;//jab kuch return nhi krwana hota hai tab void likhte hai
    else return y;//ye return krta hai value
}

int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    int m= min(a,b);
    printf("The minimum value between %d and %d is %d",a,b,m);
}