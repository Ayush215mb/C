#include<stdio.h>
int main(){
    char x='a', y='b',z='c';

    printf("%c\n%c \n%c \n\n\n",x,y,z);

    printf("%d \n%d \n%d\n\n\n",x,y,z);//jab %d daalte hai to wo character ka ASCII value print hota hai
    //small a ka ASCII value 97 se start hota hai aur z ka 120 pe khtm hota hai

    char p='A',q='B',r='C',s='Z';

    printf("%C\n%c\n%c\n%c\n\n\n",p,q,r,s);

    printf("%d\n%d\n%d\n%d\n\n\n",p,q,r,s);//capital letters ka ASCII value different hota hai

    //capital A ka ASCII value hota hai 65 aur last letter z ka hota hai 90

    char m='!',n='.',o='*';                                                                 //    --------------------------
   //                                                                                         //  |     IMP ASCII VALUES   |
    printf("%C\n%c\n%c\n",m,n,o);// har character ki kuch ASCII value hoti hai              //    |                        |
    //                                                                                        //  |     a ->  97           |
    printf("\n%d\n%d\n%d\n\n\n",m,n,o);                                                     //    |     z ->  120          |
    //                                                                                        //  |     A ->  65           |
    char g='0',h='1',i='2',j='9';                                                           //    |     Z -> 90            |
    //                                                                                        //  |     0 -> 48            |
    printf("%C\n%c\n%c\n%c\n\n\n",g,h,i,j);                                                 //    |     9 -> 57            |
    //                                                                                        //  --------------------------
    printf("%d\n%d\n%d\n%d\n\n\n",g,h,i,j);                        
 

    //            // TYPECASTING METHOD(EXPLICIT)
    int ascii1 = (int)x;   
    printf("%d\n%d",ascii1);
    return 0;

}