#include <stdio.h>
#include <string.h>

int main() {
 int a = 2;
 int b = 5;
 int res = 1;
 for(int i = 0; i<b; i++) {
  res *= a;
 }
 printf("%d\n", res);
}