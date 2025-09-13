#include <stdio.h>

// Verify that the expression getchar() != EOF is 0 or 1.

int main()
{
    int c;

    while ((c = getchar()) != EOF) { // getchar() returns ASCII (!= -1) but Ctrl+Z/D to EOF is bool true (getchar() == EOF).
        putchar(c);
    }
}