//Take a positive integer as input tell if it is divisible by 3 or 5 but not 15

#include<stdio.h>
int main(){
    int x;
    printf("Enter a positive number: ");
    scanf("%d",&x);

    if(x>0){
        if(x%15!=0 && (x%3==0 || x%5==0))
        printf("%d is divisible by 3 or 5 but not divisible by 15",x);
        else
            printf("%d is either divisible by 15 or not divisble ny 3 or 5",x);
    }
    else 
        printf("Enter a positive number");
}