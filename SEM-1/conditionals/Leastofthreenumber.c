//Taking three numbers as input anfd printing which one of them is least
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    
    printf("Enter the second number: ");
    scanf("%d",&z);
    
    printf("Enter the third number: ");
    scanf("%d",&y);

    if(x<y && x<z)
        printf("%d is lowest",x);

    if(y<x && y<z)
        printf("%d is lowest",y);

    if(z<x && z<y)
        printf("%d is lowest",z);

    
}