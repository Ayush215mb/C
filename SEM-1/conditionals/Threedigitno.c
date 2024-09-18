//check if the number is three digit or not
#include<stdio.h>
int main(){
    int x;
    printf("Enter a Three Digit number: ");
    scanf("%d",&x);
// && stands for logical AND
// || stands for logical OR
    if(x>99 && x<1000) 
    printf("It is a three digit number");
    else
        printf("It is not a three digit number");
    
}