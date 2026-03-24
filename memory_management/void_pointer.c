#include <stdio.h>
#include <stdlib.h>

// void pointers are pointers to anything, we cannot deference it directly. we need to first deference it using char
void printBytes(void *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%02x ", ((char *)arr)[i]);
    }
}

int main(int argc, char *argv[])
{
    int arr[] = {16, 31, 32, 65};        // 16 bytes
    long long arr2[] = {16, 31, 32, 65}; // 32 bytes
    printBytes(arr2, 4 * sizeof(long long));
    return 0;
}