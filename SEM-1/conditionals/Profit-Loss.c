//Checking how much seller has made profit or loss or nothing
#include<stdio.h>
int main(){
    float cp;
    float sp;
    
    printf("Enter the Cost Price of the product: ");
    scanf("%f",&cp);
    
    printf("Enter the Selling Price of the product: ");
    scanf("%f",&sp);

    if(sp>cp){
        printf("The seller has made a profit of %f", sp-cp);
    }
    if(sp<cp){
        printf("The seller has made a loss of %f", cp-sp);
    }
    else printf("The seller has made no profit or loss");


    return 0;
}