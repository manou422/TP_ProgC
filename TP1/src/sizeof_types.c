#include <stdio.h>

int main() {
    printf("Taille de char           : %zu octet(s)\n", sizeof(char));
    printf("Taille de short          : %zu octet(s)\n", sizeof(short));
    printf("Taille de int            : %zu octet(s)\n", sizeof(int));
    printf("Taille de long int       : %zu octet(s)\n", sizeof(long int));
    printf("Taille de long long int  : %zu octet(s)\n", sizeof(long long int));
    printf("Taille de float          : %zu octet(s)\n", sizeof(float));
    printf("Taille de double         : %zu octet(s)\n", sizeof(double));
    printf("Taille de long double    : %zu octet(s)\n", sizeof(long double));
}
