#include <stdio.h>

/* copy input to output */

main()
{
    // używamy int zamiast char, żeby pomieścić dowolny znak lub EOF
    // int jest używany do zapamiętywania char, ponieważ znak to i tak zestaw bitów
    int c;

    // w takim przypadku możemy wpisać więcej niż jeden znak, a w zmiennej dostaniemy tylko jeden
    //c = getchar();
    //putchar(c);

    c = getchar();

    // EOF to wartość całkowita zdefiniowana w stdio.h, jest ona różna od jakiegokolwiek znaku, warto w danej implementacji posługiwać się symboliczną stałą
    // w przypadku pętli while c zapamiętuje wszystkie wpisane znaki
    // przy użyciu if, zapamiętamy jeden znak
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
}
