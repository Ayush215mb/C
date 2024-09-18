#include<stdio.h>
int main()
{
    int x[5];

    printf("Enter the elements of array: ");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);//ek element daal ke space dena warna gnda lgega
    }

    for(int i=0; i<=4;i++)
    {
        printf("%d  ",x[i]);
    }

}
