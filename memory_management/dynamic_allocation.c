#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // the memory is allocated with malloc but it is garbage values(uninitialized).
    // int *arr = malloc(sizeof(int) * 64);
    // we had to write this with malloc to Manually set all bytes to 0.
    // memset(arr, 0, sizeof(int) * 64);

    // malloc is faster but

    // calloc Automatically initializes all values to 0.
    int *arr = calloc(256, sizeof(int));
    // if there's no space it return null instaed of the pointer
    // If allocation fails → program exits.
    if (arr == NULL)
    {
        return 1;
    }

    /*
    Resizes memory from 256 integers → 64 integers.
    May:
        Shrink the existing block, or
        Allocate a new block and copy data.
    Since original memory was zero-initialized (calloc), the first 64 elements remain 0 after shrinking.
    Remaining 192 elements are discarded.
    */
    int *temp = realloc(arr, 64 * sizeof(int));
    if (temp == NULL)
    {
        free(arr);
        return 1;
    }
    arr = temp;
    int i;
    for (i = 0; i < 64; i++)
    {
        printf(" %d ", arr[i]);
    }

    free(temp);

    return 0;
}