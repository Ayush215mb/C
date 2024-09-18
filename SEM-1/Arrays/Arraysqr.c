// Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of array
#include <stdio.h>
int square(int y)
{
    return y * y;
}
int main()
{
    int m;
    printf("Enter a number:");
    scanf("%d", &m);
    int arr[m];
    int size = sizeof(arr) / 4;
    for (int i = 0; i < m; i++)
    {
        arr[i] = m;
    }
    for (int l = 0; l < size; l++)
    {
        printf("%d ", arr);
    }
}