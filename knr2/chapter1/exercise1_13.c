#include <stdio.h>

// Write a program to print a histogram of the lengths of words in it's input.

int main()
{
    int c;
    int n = 0;
    int words = 0;
    int len[20] = {0};

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            len[words] = n;
            words++;
            n = 0;
            break;
        }
        if (c != ' ') {
            n++;
        }
        else {
            len[words] = n;
            words++;
            n = 0;
        }
    }
    printf("--- Histogram of word lengths ---\n");
    for (int i = 0; i < words; i++) {
        printf("#%d : ", i + 1);
        for (int j = 0; j < len[i]; j++) {
            putchar('=');
        }
        putchar('\n');
    }
    return 0;
}