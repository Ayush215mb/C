//Checking whether a number is even or odd
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x>0){
        if(x%2==0) printf("EVEN NUMBER");
        else printf("ODD NUMBER");
    }
    if(x<0) printf("Enter a positive number");
    if(x==0) printf("The number is zero");
    
    
    return 0;
}