#include <stdio.h>

/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 */
/* floating point version */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 40;    /* upper limit */
    step = 2;      /* step size */

    celsius = lower;
    printf("Celsius Fahrenheit table\n");
    while(celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
