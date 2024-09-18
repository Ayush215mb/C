#include<stdio.h>
int main(){
    float x= 3;
    printf("%f",x+x);// we use %f for float data types
    printf("\n");//the answer is in 6 decimal places(depends on the compiler)

    x=9;
    float y=3;
    float z=4;

    printf("%f",x/y);
    printf("\n");
    printf("%f",x/z);
    printf("\n");
    printf("%f",y/z);
    printf("\n");
    printf("\n");
    printf("%f",22.0 / 7.0);
    printf("\n");
    printf("%d", 22 / 7);

    return 0;



}