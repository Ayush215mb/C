#include<stdio.h>
int main(){
    //take a integer as an input and print its half

    int a;

    printf("Enter an integer : ");
    scanf("%d",&a);

    float b = (float)a;// this is typecasting
    // a intger data type mei hai toh usko float mei convert krne ke liye ye use krte hai
    printf("The half of the given integer is : %f \n", b/2);


    printf("agr float mei convert nhi krte toh answer aisa aata : %d  \n",a/2);



    return 0;


}