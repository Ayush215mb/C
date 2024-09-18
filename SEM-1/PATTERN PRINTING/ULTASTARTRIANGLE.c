#include<stdio.h>
int main()
{
    int m;
    printf("Enter the height of the triangle: ");
    scanf("%d",&m);

    //smjh nhi aa rha par answer aa rha :) 
    for(int i=1; i<=m; i++)//rows
    {
        for(int j=i; j<=m; j++)//columbs
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");



    //formula is j<=(n+1-i)----formula se yaad krne se aage aur diff triangle wale questions mei easy hoga
    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=(m+1-i); j++)//columbs
        {
            printf("* ");
        }
        printf("\n");
    }
}