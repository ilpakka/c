#include <stdio.h>

// Write a program to print a histogram of the frequencies of different characters in its input

int main()
{

    int c;
    int freq[256] = {0}; // 256 ASCII characters

    while((c = getchar()) != EOF) {
        freq[c]++;
        if (c == '\n') {
            break;
        }
    }

    printf("--- Frequency Histogram ---\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == '\n') {
                printf("\\n : ");
            }
            else if (i == '\t') {
                printf("\\t : ");
            }
            else if (i == ' ') {
                printf("' ' : ");
            }
            else {
                printf("%c : ", i);
            }

            for (int j = 0; j < freq[i]; j++) {
                putchar('=');
            }
            printf("\n");
        }
    }

    return 0;
}