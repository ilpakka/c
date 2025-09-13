#include <stdio.h>

// Write a program to print the corresponding Celcius to Fahrenheit table.

int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;
    printf("Celcius to Fahnrenheit\n");
    while (celcius <= upper) {
        fahr = (9.0/5.0) * (celcius + 32.0);
        printf("%6.1f %3.0f\n", celcius, fahr);
        celcius = celcius + step;
    }
    return 0;
}