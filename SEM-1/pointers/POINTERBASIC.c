#include<stdio.h>
int main()
{
    int y=9;
    int* z= &y;//int* is a data type  to store th memory address(there are also float*, bool* and so on)
    int x= 9;
    int* m=&x;

    printf("\n\n%p\n\n",m);
    printf("\n%p\n",z);
    //the memory address will always be diff 
}
