#include <stdio.h>
#include <string.h>

int main() {
    int compteur = 5;
    for (int i=0; i<compteur; i++) {
        for (int j = 0; j<=i; j++) {
            if((i==2 || i==3) && (j==1 || j==2)) {
                printf("#");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}