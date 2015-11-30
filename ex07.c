#include <stdio.h>

main()
{
    // tutaj może być też char
    // char to kod znaku w int
    int c;

    // w deklaracji można od razu dać przypisanie, ale nie trzeba
    // getchar() odczytuje dokładnie jeden znak, mimo że można wpisać więcej
    c = getchar();

    // putchar() drukuje zawartość zmiennej int jako char
    putchar(c);
    printf("\n");

    // nie zadziała, mamy int, a chcemy drukować tablicę znaków
    // printf(c);

    // c może być int lub char, i tak dostaniemy znak i kod znaku
    // zmienna jest zadeklarowana int lub char, tutaj ma miejsce pewne rzutowanie, jeśli typ się nie zgadza
    printf("char: %c\n", c);
    printf("int: %d\n", c);
}
