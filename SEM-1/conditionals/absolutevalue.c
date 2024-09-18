// take an integer as input and print its absolute value
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>=0){
        printf("Absolute value is %d",x);
    }
    else {
        x=x*(-1);
        printf("Absolute value is %d", x);
    }




    return 0;
}