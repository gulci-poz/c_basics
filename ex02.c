#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
/* floating point version */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Fahrenheit-Celsius table\n");
    while(fahr <= upper) {
        // używamy explicite wartości float
        // jeśli w wyrażeniu jest przynajmniej jeden element float, to jest ono konwertowane na float
        // w przypisaniu far = lower wartość lower jest kowertowana do float
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
