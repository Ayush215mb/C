// Arrays are list(of list,float,etc)
// brackets[] are used in array

#include <stdio.h>
int main()
{
    // declaration of an array of size 5
    int x[5];

    // declaration with initialization of an array of size 5
    int y[5] = {1, 2, 3, 4, 5};

    // Acessing elements of array
    printf("%d,%d,%d\n", y[0], y[1], y[2]);

    // changing elements of array
    y[0] = 10;
    printf("%d\n", y[0]);

    // printing all the elements of array
    for (int i = 0; i <= 4; i++)
    {
        printf("%d  ", y[i]);
    }
    printf("\n\n");
}