#include<stdio.h>
int main(){
    //% is modulus operator, it prints the remainder.

    // isme %d hi likhna hoga
    //%f likhne se answer 0.000 aayega
    printf("%d\n" , 10%2);//10%2 ka answer aayega jab 10 ko divide krenge 2 se aur jo remainder(0) aayega wo print hoga;
    
    printf("%d \n", 50%34);//50%34 ka answer aayega jab 50 ko divide krenge 34 se aur jo remainder aayega wo print hoga;
    
    printf("%d\n", 309%20);//309%20 ka answer aayega jab 309 ko divide krenge 20 se aur jo remainder aayega wo print hoga;
    
    printf("%d\n\n\n\n",109%29);//109%29 ka answer aayega jab 109 ko divide krenge 29 se aur jo remainder aayega wo print hoga;




    // a%b mei agr a<b then remainder a print ho jaata hai  
    printf("%d \n",10%25);
    printf("%d \n",108%200);
    printf("%d \n",30%31);
    printf("%d \n",50%80);

    return 0;
}