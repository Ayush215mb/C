#include<stdio.h>
void print(int m)
{
    if (m==0) return;
    printf("%d\n",m);
    print(m-1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    print(n);
    

}