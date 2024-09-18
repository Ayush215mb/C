// If an array contains n element then check if it is palindrome or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d element for array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = n - 1, pal = 0;
    while (i < j)
    {
        printf("%d %d ", arr[i], arr[j]);
        printf("\n");
        if (arr[i] = arr[j])
        {
            pal = pal + 1;
            
        }
        i++;
        j--;
    }
    printf("\n%d\n", pal);

    // if(pal>n/2)
    // {
    //    printf("The array is a palindrome.");
    // }
    // else
    //{
    // printf("The array is not a palindrome.");
    //}
}