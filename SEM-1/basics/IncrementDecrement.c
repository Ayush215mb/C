#include<stdio.h>
int main(){
    int x=5;
    printf("%d \n",x);
    x++;// x++ ya ++x ka mtlb x+1
    x--;// x-- ya --x ka mtlb x-1
    x++;//post increment
    ++x;//pre increment
    printf("%d \n",x++);// ye pehle x ko print krta hai phir usme +1 krta hai
    printf("%d \n",x);
    printf("%d \n\n\n",++x);// iska mtlb ki ye pehle plus 1 krega aur print kr dega

    x--;//post decrement
    --x;//pre decrement
    printf("%d \n",x);
    printf("%d \n",x--); //pehle value print krega aur fir minus 1 krega
    printf("%d \n",x);
    printf("%d \n",--x);// minus 1 krke jo value hoga wo print kr dega
    return 0;
    

}