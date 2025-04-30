#include <stdio.h>
#include <string.h>

int main() {
	int n = 7;
    int init = 0;
    int therme1 = 1;
    int therme2 = init + therme1;
	int thermeGeneral = 0;
	for(int i = 0; i<n; i++) {
		thermeGeneral += i; 
		printf("%d\n", thermeGeneral);
    }
}