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

// too much complicated
int main(int argc, char *argv[])
{
    int i;
    Thing T = {12, 'k', "testing", &i, 256};
    printf("%llu \n", sizeof(T));

    unsigned char data;
    for (int i = 0; i < sizeof(T); i++)
    {
        if (i % 4 == 0)
        {
            printf("\n");
        }
        data = *(((unsigned char *)&T) + i);
        printf("%02x ", data);
        /*
        0c 00 00 00
        6b 74 65 73
        74 69 6e 67
        00 00 00 00
        b4 f7 9f 70
        14 00 00 00
        00 01 00 00
        01 00 00 00
        */
    }

    printf("\n");
    // printing in numbers
    for (int i = 0; i < sizeof(T); i++)
    {
        if (i % 4 == 0)
        {
            printf("\n");
        }
        data = *(((unsigned char *)&T) + i);
        printf("%03hhu ", data);
        /*
        012 000 000 000
        107 116 101 115
        116 105 110 103
        000 000 000 000
        224 250 159 140
        122 000 000 000
        000 001 000 000
        001 000 000 000
        */
    }

    printf("\n");
    // printing in characters
    for (int i = 0; i < sizeof(T); i++)
    {
        if (i % 4 == 0)
        {
            printf("\n");
        }
        data = *(((unsigned char *)&T) + i);
        printf("%c ", data);
        /*
        k t e s
        t i n g

        ¼ ⁿ _ ≥
        ∞
        * Ç
        ≈
        */
    }

    return 0;
}