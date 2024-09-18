#include<stdio.h>
int main()
{
    int y=9;
    int* z= &y;

    printf("%d\n",y);

    printf("%p\n",&y);

    printf("%p\n",z);

    printf("%p\n",&z);

    printf("%d\n",*z);// * is derefrence operator

    y =5;

    printf("%d\n",y);

    printf("%p\n",&y);

    printf("%p\n",z);

    printf("%p\n",&z);

    printf("%d\n",*z);

    //value chng krne se uska adress chng nhi hota
}
