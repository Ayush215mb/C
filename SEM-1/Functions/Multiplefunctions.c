#include<stdio.h>
void india()
{
    printf("You r in india\n");
    

    
}


int main()
{
  printf("You r in main\n");
  void japan();
  japan();
  
}

void japan()
{
    printf("You r in japan\n");
    india();
}