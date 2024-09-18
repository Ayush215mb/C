#include<stdio.h>
int main()
{
    int m;
    printf("Enter side of the square: ");
    scanf("%d",&m);

//NESTED LOOPS
    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=m; j++)//columbs
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i=1; i<=m; i++)//rows
    {
        for(int j=1; j<=m; j++)//columbs
        {
            printf("%d ",i);//pehle i=1 hi hai aur jab ye andr wala loop khtm ho jayega toh phir i++ ho ke i=2 bn jayega
        }
        printf("\n");
    }
}