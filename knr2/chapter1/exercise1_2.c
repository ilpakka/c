#include <stdio.h>

// Experiment to find out what happens when printf's argument string contains \c

/* exercise1_2.c: In function ‘main’:
exercise1_2.c: warning: unknown escape sequence: '\c' */

int main()
{
    printf("argument \ctring");
    return 0;
}