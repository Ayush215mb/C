#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int test;     // 4 bytes
    char k;       // 1 byte
    char str[10]; // 10 bytes
    int *p;       // 8 bytes
    short sh;     // 2 bytes
} Thing;          // total = 25 bytes but while printing we get 32 bytes

int main(int argc, char *argv[])
{
    int i;
    Thing T = {12, 'k', "testing", &i, 256};
    printf("%llu \n", sizeof(T));

        return 0;
}