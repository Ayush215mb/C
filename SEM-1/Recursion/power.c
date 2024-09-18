//dry run lamba hai 
//beginner ka smjhna mushkil hai
#include<stdio.h>
int power(int a,int b)
{
    if(b==0) return 1;

    return a* power(a,b-1);
}

int main()
{
    int x,y;
    printf("Enter the base number: ");
    scanf("%d",&x);

    printf("Enter the power: ");
    scanf("%d",&y);

    printf("%d^%d = %d",x,y,power(x,y));

}