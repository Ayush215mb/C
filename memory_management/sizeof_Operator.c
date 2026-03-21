#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // size of int is 4
    printf("the size of an int is %d bytes\n", sizeof(int));

    int arr[3] = {3, 5, 19};
    // Here, arr is treated as a real array, not a pointer.
    printf("the size of the array of length 3 is %llu bytes\n", sizeof(arr));

    // The size of a pointer is determined by the address space of the system, not by the data type it points to.
    /*
    On most modern systems (64-bit architecture):
        A pointer stores a memory address
        In a 64-bit system, memory addresses are 64 bits long
        64 bits = 8 bytes
     */
    int *arrp = arr;
    printf("the size of a pointer of is %llu\n", sizeof(arrp));

    // sizeof() returns size_t, an 64 bit unsigned integer so sizeof(sizeof(int)) is 8 bytes/64  bits

    printf("the sizeof(sizeof(int)) is %zu", sizeof(sizeof(int)));

    return 0;
}