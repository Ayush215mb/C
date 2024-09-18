//take year as input and print whether it was/will be a leap year or not

// IMP POINTS FOR LEAP YEAR.
// 1. Leap years occurs after every 4 years
// 2. Any year divisible by 100 is not a leap year
// 3. Any year divisible ny 400 is 100% leap year
#include<stdio.h>
int main(){
    int x;
    printf("Enter the year: ");
    scanf("%d",&x);

    if( x%400==0 || ( x%4==0 && x%100 !=0))//truth table bna ke smjh aa jayega
        printf("It is a Leap Year");
    else 
        printf("It is NOT a Leap Year");

    return 0;
}
