//Taking three distinct number and printitng the graeatest (NESTED)
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    
    printf("Enter the second number: ");
    scanf("%d",&y);
    
    printf("Enter the third number: ");
    scanf("%d",&z);

    if(x>y){
        if(x>z) 
            printf("%d is the greatest",x);
        else
            printf("%d is the greatest",z);
    }
    else if (y>z){
        printf("%d is greatest",y);
    }
    else
        printf("%d is greatest",z);
    
    
}