#include<stdio.h>

void change(int x[],int m)
{
    x[2]=7;//Array is pass by reference so the value changes here also gets chnged in the real array
    m=100;//variable(int,float,char) are pass by value.....their value chnged in the funcn are not chnged in the main variable
}

int main()
{
    int arr[]={1,2,3,4,5};

    int y=5;

    printf("%d,,,,%d \n",arr[2],y);
    change(arr,y);
    printf("%d,,,,%d \n",arr[2],y);
    
}