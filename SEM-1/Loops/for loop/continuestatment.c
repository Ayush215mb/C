//WAP to print even numbers from 1 to 100 using continue statement
#include<stdio.h>
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%2!=0)
        {
            continue;//skips 
        }
        printf("%d  ",i);
    }
    printf("\n\n\n");


    for(int i=100; i<+200; i++)
    {
        if(i%2!=0)
        {
            printf("%d  ",i);
        }
        
    }
}
