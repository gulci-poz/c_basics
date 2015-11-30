#include <stdio.h>

main()
{
    int c;

    // weryfikacja wartości porównania getchar() do EOF - 0 lub 1
    // nie jest konieczny nawias opakowujący cały drugi argument
    printf("%d\n", (c = getchar()) != EOF);
    putchar(c);
    printf("\n");
    // wartość EOF, -1
    printf("%d\n", EOF);
}
