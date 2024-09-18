//Checking whether a real number is integer or not
#include<stdio.h>
int main(){
    float x;//x= 3.154
    printf("Enter a real number : ");
    scanf("%f", &x);
    int y= (int)x; //y = 3
    float a= (float)y;// a= 3.0000
    //do float ko hi minus kr skte hai iss liye y ko i nteger se float mei convert kr rhe hai

    if(x-a==0) printf("Number is integer");
    if(x-a >0) printf("Number is not integer");
    return 0;

}