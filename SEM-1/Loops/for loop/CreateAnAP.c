//take first term,cd,no. of term from user and print the AP
//last term=a+(n-1)d
// L.T=3+(n-1)5
// = 5n-2

#include<stdio.h>
int main(){
    int a,d,l,n;
    printf("Enter the first term: ");
    scanf("%d",&a);
    
    printf("Enter the common difference: ");
    scanf("%d",&d);
    
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    l=a+(n-1)*d;

    for(int i=a; i<=l; i=i+d){
        printf("%d  ",i);
    }
    

   
}