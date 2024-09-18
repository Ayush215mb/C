//Taking an array as input and printing it in reverse order
#include<stdio.h>
int main()
{
    int m;
    printf("Enter the size of Array:");
    scanf("%d",&m);
    int arr[m];
    printf("\nEnter %d elements to add in the array:",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The reverse of your given array is ");
    for(int i=m-1;i>-1;i--)
    {
        printf("%d ",arr[i]);
    }

    
}