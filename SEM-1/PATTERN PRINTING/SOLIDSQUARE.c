#include<stdio.h>
int main()
{
    int m;
    printf("Enter the side of the square: ");
    scanf("%d",&m);

//NESTED LOOPS
    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=m; j++)//columbs
        {
            printf("* ");
        }
        printf("\n");
    }
}