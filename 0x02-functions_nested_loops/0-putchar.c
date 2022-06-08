#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    printf("enter some character. enter $ to exit...\n");
    while (c != '$');
    {
        c = getchar();
        printf("\n entered charcter is: ");
        putchar(c);
        printf("\n");
        printf("\n");
    }
    return 0;
}

