//print an AP whose first term is 3 and C.D is 5 and take 'n' terms from user
//last term=a+(n-1)d
// L.T=3+(n-1)5
// = 5n-2

#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of terms: ");
    scanf("%d",&a);
    int x;;
     
    for(int i=3; i<=(5*a)-2;i=i+5){
        printf("%d  ",i);
    }
}
    