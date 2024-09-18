//To print the nth term of fibbonaci series
//imp ques---exam mei aa skta hai(acc to utuber)
#include<stdio.h>
int fibo(int a)
{
    if(a==1||a==2) return 1;
    return fibo(a-1) + fibo(a-2);
}

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);

    printf("the ans will be: %d",fibo(x));

}