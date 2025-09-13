#include <stdio.h>

// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

int main()
{
    int c;
    int last = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (last == 0) {
                putchar(' ');
                last = 1;
            }
        }
        else {
            putchar(c);
            last = 0;
        }
    }
    return 0;
}