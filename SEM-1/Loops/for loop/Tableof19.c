#include<stdio.h>
int main(){
    for(int i=19;i<=190;i=i+19){
        printf("%d\n",i);//table of 19
    }
 printf("\n\n\n\n");
    for(int i=1;i<=190;i++){
        if(i%10==0) printf("%d\n",i);//multiples of 10
    }
        
}