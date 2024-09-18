//Taking three numbers as input anfd printing which one of them is greatest
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    
    printf("Enter the second number: ");
    scanf("%d",&y);
    
    printf("Enter the third number: ");
    scanf("%d",&z);

    if(x>y && x>z)
        printf("%d is greatest",x);

    if(y>x && y>z)
        printf("%d is greatest",y);

    if(z>x && z>y)
        printf("%d is greatest",z);

    
}