#include<stdio.h>
int main()
{
    int y=9;
    int* z= &y;

    printf("%d\n",y);

    printf("%d\n",*z);

    *z=5;

    printf("%d\n",y);

    printf("%d\n",*z);


}