#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int arr[] = {1, 2, 3};

    int *p = malloc(3 * sizeof(int));

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
}