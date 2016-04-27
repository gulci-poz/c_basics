#include <stdio.h>

int main()
{
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        // fahr na potrzeby iteracji jest typu int
        // ale wynik chcemy mieć typu float
        // dlatego w wyrażeniu potrzebujemy przynajmniej jednej wartości typu float
        printf("%3d %6.1f\n", fahr, 5 * (fahr - 32) / 9.0);

    getchar();

    return 0;
}
