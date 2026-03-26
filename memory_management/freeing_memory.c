#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void process_Arr(int **arr, int n)
{
    // sopme processing

    /*
    *arr
        Dereferencing int **arr
        Gives you the original pointer (int *)
    free(*arr)
        Frees the heap memory allocated in main
    *arr = NULL
        Sets the original pointer in main to NULL
    */
    free(*arr);
    *arr = NULL;
}

int main(int argc, char *argv[])
{

    int *arr = malloc(sizeof(int) * 10);
    // arr → points to dynamically allocated memory (array of 10 integers)
    //&arr → address of the pointer itself (type: int **)
    printf("heap memory -> %p,\n stack memory (where the pointer variable lives)-> %p", arr, &arr);

    // pass address of the pointer, not the pointer itself.
    process_Arr(&arr, 10);
    free(arr);

    return 0;
}