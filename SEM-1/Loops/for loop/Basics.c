#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of times you want to print: ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        printf("Hello world\n");
    }
}