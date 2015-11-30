#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
/* integer version */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Fahrenheit-Celsius table\n");
    while(fahr <= upper) {
        // 5/9 dałoby 0, ponieważ w dzieleniu z int jest obcinana część dziesiętna
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
