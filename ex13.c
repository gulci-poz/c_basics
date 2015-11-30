#include <stdio.h>

main()
{
    int c, nl;
    nl = 0;

    // wartości znaków, np. 'A' to tak naprawdę stała znakowa, pod spodem jest integer; '\n' to stała łańcuchowa, jest legalna jako stała znakowa, to tak naprawdę jeden znak, który ma swój kod w ASCII
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;

    printf("%d\n", nl);
}
