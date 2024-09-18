#include<stdio.h>
int main(){
    float a = 5/2;      //here 5 and 2 are integers and on dividng two integers we always get an integer
 //                       5/2 ko as a integer divide krne se answer 2 aata hai aur phir wo float type mei jaa ke 2.000000 bn jaata hai
    printf("%f \n\n",a);


    float x= 5; // idhr x=5.00000
    float y =2; // idhr y=2.00000
    float z =x/y; // do float ko divide krke hmesha float hi milta hai
    //                 5.00000/2.0000 is 2.5000
    printf("%f\n\n\n",z);

    // int/int== int
    //float/float== float
    // int/float == float
    //float//int== float

    float p= 5/2;  //2.00
    float q= 5/2.0;//2.5
    float r= 5.0/2;//2.5
    float s= 5.0/2.0;//2.5

    printf("%f\n%f\n%f\n%f\n",p,q,r,s);





    return 0;


}