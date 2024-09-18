#include<stdio.h>
int main(){
    int principal,time;
    float rate,si;
    printf("Enter the principal amt:");
    scanf("%d",&principal);//taking input
    printf("Enter the time: ");
    scanf("%d",&time);//taking input
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("The simple intrest will be: %f \n",principal*time*rate/100);

    return 0;
}