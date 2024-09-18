#include <stdio.h>

int max(int arr[5], int n)
{
    // max ka value 0 bhi de skte hai par agr array ke andr value neg mei hoga to wo glt answer dega iss liye first element ko max dena better hai aur second element se loop chalana better h.
    int max = arr[0];            // max = first element of Array
    for (int i = 1; i <= n; i++) // ye loop second element se start hona chahiye
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5], n = 5;
    printf("Enter 5 elements:");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    printf("The maximum element in the array is %d", max(arr, n));
}