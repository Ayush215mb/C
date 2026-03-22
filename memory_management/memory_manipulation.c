#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    1 int = 4 bytes = 8 hex digites = 32 bits = 32 binary digit
    2 hex digit = 1 byte =  8 bits = 8 binary digits
    1 hex digit = 4 bits  = 4 binary digits
    1 bit   = 1 binary digit (0 or 1)


    when we say int x = 10
            Value (int):
                   10
                    ↓
            32-bit binary:
     00000000 00000000 00000000 00001010
                    ↓
            Hex representation:
                0x0000000A
                    ↓
            Split into bytes:
                00 00 00 0A
                   ↓
            Stored in memory (little-endian):
                0A 00 00 00
                    ↓
            Mapped to addresses:
                0x1000 → 0A
                0x1001 → 00
                0x1002 → 00
                0x1003 → 00

    1. memcpy — copy bytes
        int a = 10;
        int b;

        memcpy(&b, &a, sizeof(int));
        What happens in memory:
            a: 0A 00 00 00
            b: ?? ?? ?? ??

            after memcpy:
            b: 0A 00 00 00

    2. memset — fill bytes
        int x;
        memset(&x, 1, sizeof(int));
        Memory:
            01 01 01 01  → 0x01010101
        It fills bytes, not integers
        returns ptr

    3. memchr — find a byte
        int arr[] = {3, 4};
        memchr(arr, 3, sizeof(arr));
        Memory:
            03 00 00 00  04 00 00 00
        Return:
        Pointer to the matching byte
        NULL if not found

    4. memcmp — compare bytes
        int a = 10;   // 0A 00 00 00
        int b = 2;    // 02 00 00 00
        memcmp(&a, &b, sizeof(int));

        0A vs 02 → first byte differs
        returns positive

        Return values:
            Case	             Return
            equal                  0
            first < second   	negative
            first > second   	positive



*/

int main(int argc, char *argv[])
{
    // nomral int has 4 bytes
    int arr1[] = {1, 2}; // 0 0 0 1
    int arr2[] = {3, 4};

    // 1.  The memcmp function in C is a standard library function used to compare the first n bytes of two memory blocks pointed to by arr1 and arr2.
    if (memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
    {
        printf("it returns %d if they are same\n", memcmp(arr1, arr2, 2 * sizeof(int)));

        printf("Array are same\n");
    }
    else
    {
        printf("it returns %d if they are not same\n", memcmp(arr1, arr2, 2 * sizeof(int)));
        printf("Arrays are not same\n");
    }

    // to compare the int array with short int, it's size is 2 bytes only
    short int arr3[] = {1, 2}; // 0 1 0 2
    // while comparing the first 2 bytes of both array, we do 0 0 = 0 1. Therefore it is not same
    if (memcmp(arr1, arr3, 2 * sizeof(short int)) == 0)
    {
        printf("Array are same\n");
    }
    else
    {
        printf("Arrays are not same\n");
    }

    // 2. memcpy is a standard C library function used to copy a specified number of bytes from a source memory location to a destination memory location.
    memcpy(arr1, arr2, 2 * sizeof(int));
    printf("%d %d \n", arr1[0], arr1[1]);

    // 3. memset is a standard library function in C and C++ used to fill a block of memory with a specified byte value.  It operates at the byte level, making it fast and efficient for initializing large memory regions.

    // setting every byte of arr1 to 1, the byte representation is 01010101 and 01010101
    memset(arr1, 1, 2 * sizeof(int));
    printf("%08x %08x \n", arr1[0], arr1[1]);

    // 4. memchar
    // above we set the byte of arr1 to 1 so the byte representation of arr2 is 1, 1
    if (memchr(arr1, 1, sizeof(int) * 2) != NULL)
    {
        printf("%d", sizeof(arr1));
        printf("Found the byte\n");
    }
    else
    {
        printf("did not Found the byte\n");
    }
    // we will not find 1 in arr2 as byte representation of arr2 is 0003, 0004

    if (memchr(arr2, 1, sizeof(int) * 2) != NULL)
    {
        printf("Found the byte\n");
    }
    else
    {
        printf("did not Found the byte\n");
    }
    // we will find 0 in arr2 as byte representation of arr2 is 0003, 0004
    if (memchr(arr2, 0, sizeof(int) * 2) != NULL)
    {
        printf("Found the byte\n");
    }
    else
    {
        printf("did not Found the byte\n");
    }
    // we will find 3 in arr2 as byte representation of arr2 is 0003, 0004
    if (memchr(arr2, 3, sizeof(int) * 2) != NULL)
    {
        printf("Found the byte\n");
    }
    else
    {
        printf("did not Found the byte\n");
    }
}