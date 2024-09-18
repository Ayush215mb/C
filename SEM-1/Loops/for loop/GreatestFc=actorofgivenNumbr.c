#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int hf=1;

    for(int i=1; i<=n-1; i++)
    {
      if(n%i==0) hf=i;
        
    }
   printf("The highest factor of is %d\n",hf);

    int HF=1;
    for(int i=n-1; i>=1; i--)//i= n/2 se bhi start kr skte hai kyu ki highest factors other than that number half hi ho skta hai(mathematical gyaan)
    {
        if(n%i==0)
        {
            HF=i;
            break;
        }
               
    }
    
    printf("The HIGHEST FACTOR of is %d\n",HF);


}