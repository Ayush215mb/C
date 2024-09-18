//Checking whether a number is even or odd using Ternary
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
   
 //if(x>0){
 //       if(x%2==0) printf("EVEN NUMBER");
 //       else printf("ODD NUMBER");
 //   }
  //  if(x<0) printf("Enter a positive number");
   // if(x==0) printf("The number is zero");
    
   (x%2==0) ? printf("Even number") : printf("Odd number");

   //(if wala condition) ? if it is true then jo krna hoga wo yha likhenge : yha pe else wala command likhenge
    // condition? true : False;
    return 0;
}

// 2 condition wala prgram ko isse ek line mei likh skte hai