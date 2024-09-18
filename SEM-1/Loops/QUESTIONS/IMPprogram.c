//WAP to print the reverse of a given number
#include<stdio.h>
int main()
{
    int n,r=0;
    printf("ENter a number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        int ld=n%10;// ld mei last digit aata hai---STEP1
        n=n/10;//STEP2
        r=r*10;//STEP3
        r=r+ld;//STEP4

    }
    printf("The reverse of the given number is %d",r);
}

//if n=1234
// then in step 1 ld=4
//in step 2 n is divided and it becomes 123
//in step 3 r is multiplied by 10 but it's value is 0 so it doesnt chng
// in step 4 the value r becomes 4


// again in next step ld=3
//now n becomes 12
// r=4 and now it is multiplied by 10 so it becomes 40
// and now ld(3) is added to 40 so r=43


// again in next step ld=2
//now n becomes 1
// r=43 and now it is multiplied by 10 so it becomes 430
// and now ld(2) is added to 430 so r=432

//smjh aagya :)
