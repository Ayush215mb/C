#include<stdio.h>
int main()
{
    int m;
    printf("Enter side of the square: ");
    scanf("%d",&m);

 
  for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=m; j++)//columbs
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i=1; i<=m; i++)//rows
        {
            for(int j=1; j<=m; j++)//columbs
            {
                printf("%c ",i+64);
            }
            printf("\n");
        }


}