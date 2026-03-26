#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <crtdbg.h>

// memory leaks happens when ever we forget to free the memory which was dynamically allocated, by using malloc,calloc

int *radndom_array(int n)
{
    int *arr = malloc(sizeof(int) * n);

    int i;

    srand(0);

    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    return arr;
}
/*
radndom_array allocates memory using malloc
It returns the pointer → ownership is transferred to main
That memory stays allocated until you explicitly free it

adding free(arr) in the main fixes it.
*/

int main(int argc, char *argv[])
{
    int *arr = radndom_array(15);
    int i;

    for (i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }
    // free(arr);

    _CrtDumpMemoryLeaks(); // used to check if there are memory leaks
    return 0;
}