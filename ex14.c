#include <stdio.h>

main()
{
    int c, nblanks, nspaces, nlines, ntabs;

    // przy inicjalizacji w jednej linii, zdarza się nieprawidłowa wartość
    nblanks = 0;
    nspaces = 0;
    nlines = 0;
    ntabs = 0;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            ++ntabs;
            ++nblanks;
        }

        if(c == '\n') {
            ++nlines;
            ++nblanks;
        }

        if(c == ' ') {
            ++nspaces;
            ++nblanks;
        }
    }

    printf("\n");
    printf("all blanks: %d, spaces: %d, tabs: %d, lines: %d\n", nblanks, nspaces, ntabs, nlines);
}
