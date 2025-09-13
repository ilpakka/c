#include <stdio.h>

// Write a program to count blanks, tabs, and newlines.

int main() {

    int c;
    int blank = 0;
    int tab = 0;
    int newline = 0;

    c = getchar();
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank;
        }
        if (c == '\t') {
            ++tab;
        }
        if (c == '\n') { // after regular input counts too
            ++newline;
        }
    }
    // prints on EOF
    printf("Total:\n");
    printf("Blanks: %d\n", blank);
    printf("Tabs: %d\n", tab);
    printf("Newlines: %d\n", newline);
    return 0;
}