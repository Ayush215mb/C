#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);

    printf("Enter the number of columbs: ");
    scanf("%d",&n);

//NESTED LOOPS
    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=n; j++)//columbs
        {
            printf("* ");
        }
        printf("\n");
    }
}