//Given a point(x,y) write a program to print whether it lies in which quadrant or it lies on either of the axis.
#include<stdio.h>
int main(){
    int x,y;
    
    printf("Enter the value of X:");
    scanf("%d",&x);
    
    printf("Enter the value of Y:");
    scanf("%d",&y);

    if(x>0 && y>0)
        printf("The point(%d,%d) lies in first quadrant",x,y);

    else if(x<0 && y>0)
        printf("The point(%d,%d) lies in second quadrant",x,y);

    else if(x<0 && y<0)
        printf("The point(%d,%d) lies in third quadrant",x,y);

    else if(x>0 && y<0)
        printf("The point(%d,%d) lies in fourth quadrant",x,y);

    else if(x==0 && y>0)
        printf("The point(%d,%d) lies on Y-axis ",x,y);

    else if(x>0 && y==0)
        printf("The point(%d,%d) lies on X-axis ",x,y);

    else
        printf("The point(%d,%d) lies on origin",x,y);







}