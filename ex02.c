#include <stdio.h>

// konwersja stopni Fahrenheita do Celsjusza

int main()
{
    // używamy explicite wartości float dla obu temperatur
    // do zmiennej typu integer jest zapisywana wartość bez części ułamkowej
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // jeśli w wyrażeniu jest przynajmniej jeden element float, to jest ono konwertowane na float
    fahr = lower;

    printf("Konwersja stopni Fahrenheita do Celsjusza\n");

    while(fahr <= upper) {
        // mamy w wyrażeniu jedną wartość typu float - fahr
        // wynik wyrażenia będzie typu float
        // jeśli fahr byłby typu int, to wynik zostałby przekonwertowany do int (same wartości typu int w wyrażeniu)
        // w takim wypadku musielibyśmy sztucznie którąś wartość podać jako float, np. 9.0
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    // konsola w CLion może gubić część rezultatów, dla pewności czekamy na input użytkownika
    getchar();

    return 0;
}
