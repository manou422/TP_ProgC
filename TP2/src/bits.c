#include <stdio.h>
#include <string.h>

int main() {
    int d = 0b100000000000000000000100000;
    
    int bit_4 = (d >> 3) & 1;
    int bit_20 = (d >> 19) & 1;
    
    if (bit_4 == 1 && bit_20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}