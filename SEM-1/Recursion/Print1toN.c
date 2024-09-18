#include<stdio.h>
void print(int m)
{
    if (m==0) return;
    print(m-1);
    printf("%d\n",m);
    
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    print(n);
    

}