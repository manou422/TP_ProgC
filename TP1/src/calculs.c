#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int num1 = 10;
	int num2 = 5;
	char op = '+';
	int res = 0;

	switch (op) {
        case '+': res = num1 + num2;
        case '-': res = num1 - num2;
        case '*': res = num1 * num2;
        case '/': res = num2 != 0 ? num1 / num2 : 0;
        case '%': res = num2 != 0 ? num1 % num2 : 0;
        case '&': res = num1 & num2;
        case '|': res = num1 | num2;
        case '~': res = ~num1;
    }

	printf("%d\n", res);

}