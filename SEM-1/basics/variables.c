#include<stdio.h>
int main(){
    //int x;
    //x=5;
    //printf("%d",x+7);
    //printf("\n");
   // printf("%d",x*x);

    int y = 8;
    int x=4;
    printf("%d",x+y);
    printf("\n");
    printf("%d",x-y);
    printf("\n");
    printf("%d",x*y);
    printf("\n");
    printf("%d",x/y);//4/8 is 0.5 but it only print integer so the answer is 0 (does not print floating numbers)
    printf("\n");

    int u=9;
    int p=3;
    printf("%d",u/p);
    printf("\n");
    printf("%d",u/x);// the answer should be 2.25 but it only print integer so the answer is 0 (does not print floating numbers)
    printf("\n");
    return 0;




}
