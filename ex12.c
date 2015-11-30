#include <stdio.h>

main()
{
    double nc;
    for(nc = 0; getchar() != EOF; ++nc)
        ;

    // %f jest również dla double
    // będziemy mieli drukowanie bez kropki i miejsc dziesiętnych
    printf("%.0f\n", nc);
}
