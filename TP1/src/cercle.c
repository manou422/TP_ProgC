#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    float rayon = 3;
    float aire = 0;
    float périmètre = 0;
    aire = M_PI * rayon * rayon;
    périmètre = 2 * M_PI * rayon;
    printf("%.2f m\n", aire);
    printf("%.2f m\n", rayon);
    printf("%.2f m\n", périmètre);

}