//WAP to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
#include<stdio.h>
int main()
{
    int ASCII=65;
    
    while(ASCII<=90)
    {
    printf("The ASCII value of %c is %d\n",ASCII,ASCII);//%C se uss number ka char value print hota hai %d se uska int value
    ASCII+=1;
    
    }

//AGR ASCII VALUE YAAD NA HO TO AISE KRNA HOGA
printf("\n\n\n\n");
   
   char a='A';

   while(a<='Z')
   {
    int n=(char)a;
    printf("The ASCII value of %c is %d\n",a,n);
    a=a+1;
   }


}