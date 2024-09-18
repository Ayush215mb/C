#include<stdio.h>
int main()
{
    int m;
    printf("Enter the height of the triangle: ");
    scanf("%d",&m);


    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=i; j++)//columbs---j<=i mtlb jitna row number hoga utne time hi star print hoga uss column mei
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    printf("\n\n");

    
    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=i; j++)//columbs---j<=i mtlb jitna row number hoga utne time hi star print hoga uss column mei
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
}