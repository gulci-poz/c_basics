#include <stdio.h>

// konwersja stopni Celsjusza do Fahrenheita

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 40;
    step = 2;

    celsius = lower;

    printf("Konwersja stopni Celsjusza do Fahrenheita\n");

    while(celsius <= upper) {
        fahr = 32 + celsius * 9 / 5;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    getchar();

    return 0;
}
