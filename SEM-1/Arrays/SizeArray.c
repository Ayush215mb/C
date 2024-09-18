#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6,7,9,8,11,2,233,44,55,66,99,4,555,44321,432,13,44};

    //no. of bytes taken by the whole array
    int m =sizeof(x);

    //no. of bytes taken by one element of array
    //we already know that one integer value takes 4 bytes
    int a = sizeof(x[0]);//so it will be 4

    printf("%d,%d\n",m,a);
    // dividing total no. of bytes used by the array by the no. of bytes used by one element== no. of element in the array
     
    int n=m/a;
    printf("The size of array is %d\n",n);

   

    for(int i=0; i<n;i++)//we can also write i<=n-1    
    {
        printf("%d  ",x[i]);
    }

}
