#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/*

32bit:

    a char is 1 bytes

    an int is 4 bytes

    a float is 4 bytes

    a double is 8 bytes

    a short int is 2 bytes

    a long int is 4 bytes

    a long double is 12 bytes

    a long long int is 8 bytes

64bit:

    a char is 1 bytes

    an int is 4 bytes

    a float is 4 bytes

    a double is 8 bytes

    a short int is 2 bytes

    a long int is 8 bytes

    a long double is 16 bytes

    a long long int is 8 bytes
*/

int main(int argc, char *argv[])
{
    long long a = 15;
    long long b = 20;
    long long c[] = {1, 2, 3};

    long long *p = c + 1;  // get the address of c and add 1 times sizeof(typeof c)
    long long *po = c - 1; // will give garbage value
    // multiplying or dividing to c gives an error

    // we can only minus two pointers, adding/multiply/dividing will throw an error
    long long result = &a - &b; // subtracting two pointers is their difference in memory divided by sizeof(their type)
    printf("Result is %lld with address %p and %p \n", result, &a, &b);
    // Result is 1 with address 0000000000000001 and 000000130efffa00
    //  difference of addresses is 8 bytes as we use long long
    /*
        we get the result +ive when subtracting b from a.

        we have first intitalized a and then b so we might think that a is behind the memory address of b, &a < &b and we would  get a negative while subtracting &b from &a.

        but they are stored in stack, stack grows downward (from high → low memory)
        Newer variables are placed at lower addresses
        therefore &a > &b and we get positive number but this is can also change based on comiler and platform.

     */

    long long *q = malloc(sizeof(long long));
    long long *r = malloc(sizeof(long long));
    long long result2 = q - r;

    printf("Result is %lld with address %p and %p \n", result2, q, r);

    return 0;
}

/*
    this is an undefined behaviour and is not reliable as the address can be changed or different.
        NOTE: ONLY SUBTRACT POINTER FROM SAME ARRAY

    Result is 1 with address 0000008c541ff978 and 0000008c541ff970
        &a - &b
        = (0x...f978 - 0x...f970) / sizeof(long long)
        = (8 bytes) / 8
        = 1

    Result is -4 with address 000001c744ba24a0 and 000001c744ba24c0
        q = 0x...24a0
        r = 0x...24c0

        q - r
        = (0x24a0 - 0x24c0) / 8
        = (-32 bytes) / 8
        = -4


*/