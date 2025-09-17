#include <stdio.h>

// Print input one word per line

int main()
{

    int c;

    while((c = getchar()) != EOF) {

        if (c == ' ') {
            printf("\n");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}