#include <stdio.h>

main()
{
    long nc;
    nc = 0;

    // EOF w linii komend - ctrl+d
    while(getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
}
