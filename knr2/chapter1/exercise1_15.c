#include <stdio.h>

// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion

int to_celsius(int fahr)
{
    return (5 * (fahr-32) / 9);
}

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = to_celsius(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}