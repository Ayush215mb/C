//TAke input %age from student print his/her grade
#include<stdio.h>
int main(){
    int a;
    printf("ENter you percentage: ");
    scanf("%d",&a);

    if(a<40 && a>0) 
    {
        printf("YOU HAVR FAILED");
    }
    else if (a>40 && a<61)
    {
        printf("AVERAGE");
    }
    else if(a>60 && a<81)
    {
            printf("GOOD");
    }
    else if(a>80 && a<101)
    {
        printf("VERY GOOD");
    }
    else
        printf("Your percentage should be between 0-100");

        return 0;

}