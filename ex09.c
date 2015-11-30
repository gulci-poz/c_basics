#include <stdio.h>

main()
{
    int c;

    // jeśli damy if, to dostaniemy tylko jeden znak, niezależnie od tego ile wpisaliśmy
    // while sprawia, że getchar() działa w kółko i c zapamiętuje wiele znaków (również wtedy, gdy jest char)
    // nawias jest konieczny, gdyż != ma większy priorytet niż =
    while((c = getchar()) != EOF)
        putchar(c);
}
