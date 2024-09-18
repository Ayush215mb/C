#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
  printf("Enter 1st number: ");
  scanf("%d",&x);

  printf("Enter 2nd number: ");
  scanf("%d",&y);

  printf("the sum is %d",sum(x,y));
}

