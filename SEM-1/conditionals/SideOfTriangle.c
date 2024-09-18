//take three measurements and check if they can form a triangle or not 
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the first side of Triangle: ");
    scanf("%d",&x);
    
    printf("Enter the second side of Triangle: ");
    scanf("%d",&y); 
    
    printf("Enter the third side of Triangle: ");
    scanf("%d",&z);

    if(x+y>z && y+z>x && x+z>y)
        printf("It can form a traingle");

    else
        printf("It cannot form a triangle");
    

    
}