#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of which you want to print table: ");
    scanf("%d",&n);

    for(int i=n; i<=n*10; i=i+n){
        printf("%d\n",i);
    }
}