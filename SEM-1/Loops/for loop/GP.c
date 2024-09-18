#include<stdio.h>
int main(){

    int a;
    printf("Enter first term: ");
    scanf("%d",&a);
    
    int c;
    printf("Enter the common ratio: ");
    scanf("%d",&c);

    int n;
    printf("Enter Number of terms: ");
    scanf("%d",&n);
   
    for(int i=0; i<n; i++){
        printf("%d  ",a);
        a=a*c;
    }

}