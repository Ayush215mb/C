#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x>0) printf("positive number");
    if(x<0) printf("Negative number");

    return 0;

}