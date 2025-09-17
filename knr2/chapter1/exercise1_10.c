#include <stdio.h>

// Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each blackslash by \\.

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') { // tab
            printf("\\t");
        }
        else if (c == '\b') { // backspace
            printf("\\b");
        }
        else if (c == '\\') { // blackslash
            printf("\\\\");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}