#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 16;
    // this pointer p has the address of the variable a, the sterik used here is different from the dereferencing operator
    int *p = &a;

    // * is the dereferencing operator which goes on to that memory address and check what is stored there and prints it.
    printf("%d\n", *p);

    *p = 20;
    printf("%d\n\n", *p);

    int arr[3] = {10, 50, 100};
    // an array points to the address of the first element
    printf("%d \n", *arr);
    printf("%d \n", *(arr + 1));
    printf("%d \n", *(arr + 2));
    // this is what happens behind the scene when we write arr[0], arr[1],arr[2]
    return 0;
}