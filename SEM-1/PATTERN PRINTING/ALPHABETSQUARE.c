#include <stdio.h>
int main()
{
    char m;
    printf("Enter a alphabet: ");
    scanf("%c", &m);

    // NESTED LOOPS for small letters
    if (m >= 'a' && m <= 'z')
    {
        for (char i = 'a'; i <= m; i++) // rows
        {
            for (char j = 'a'; j <= m; j++) // columbs
            {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
    // NESTED LOOPS for CAPITAL letters

    if (m >= 'A' && m <= 'Z')
    {
        for (char i = 'A'; i <= m; i++) // rows
        {
            for (char j = 'A'; j <= m; j++) // columbs
            {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
}