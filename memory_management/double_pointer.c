#include <stdio.h>

void display(char **output)
{
    // output is the double pointer, pointing to the pointer of text "This is a test"
    printf("double pointer (output): %p\n", (void *)output);
    printf("single dereference (*output): %s\n", *output);
    printf("double dereference (**output): %c and its address will be %p \n", **output, (void *)(*output));
    // we can also chng the text by using *ouput
    *output = "This is another text";
}

int main(int argc, char *argv[])
{
    // str(char*) is a address(pointer), pointing to the text "This is a test".
    //  but the address/pointer is also stored somewhere, using &str(char**) we get the address of the pointer

    char *str = "This is a test";
    printf("\n\n%s\n\n", str);

    printf("pointer of text(str) %p\n", (void *)str);
    printf("address of pointer (&str): %p\n", (void *)&str);

    display(&str);
    printf("\n\n%s\n\n", str);
    return 0;
}