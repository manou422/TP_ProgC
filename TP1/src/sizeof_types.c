#include <stdio.h>

int main() {
    printf("Taille de char            : %zu octet(s)\n", sizeof(char));
    printf("Taille de signed char     : %zu octet(s)\n", sizeof(signed char));
    printf("Taille de unsigned char   : %zu octet(s)\n\n", sizeof(unsigned char));

    printf("Taille de short           : %zu octet(s)\n", sizeof(short));
    printf("Taille de signed short    : %zu octet(s)\n", sizeof(signed short));
    printf("Taille de unsigned short  : %zu octet(s)\n\n", sizeof(unsigned short));

    printf("Taille de int             : %zu octet(s)\n", sizeof(int));
    printf("Taille de signed int      : %zu octet(s)\n", sizeof(signed int));
    printf("Taille de unsigned int    : %zu octet(s)\n\n", sizeof(unsigned int));

    printf("Taille de long int        : %zu octet(s)\n", sizeof(long int));
    printf("Taille de signed long     : %zu octet(s)\n", sizeof(signed long));
    printf("Taille de unsigned long   : %zu octet(s)\n\n", sizeof(unsigned long));

    printf("Taille de long long int        : %zu octet(s)\n", sizeof(long long int));
    printf("Taille de signed long long     : %zu octet(s)\n", sizeof(signed long long));
    printf("Taille de unsigned long long   : %zu octet(s)\n\n", sizeof(unsigned long long));

    printf("Taille de float           : %zu octet(s)\n", sizeof(float));
    printf("Taille de double          : %zu octet(s)\n", sizeof(double));
    printf("Taille de long double     : %zu octet(s)\n", sizeof(long double));
}
