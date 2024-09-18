//recursion is calling the same func multiple times 

#include<stdio.h>

void print(int a)
{
    if (a==0) 
    {
        return;
    }
    printf("%d\n",a);
    a=a-1;
    print(a);

}

int main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    print(m);
}