#include <stdio.h>

int main() {	
	int start, mod;
	printf("Start: ");scanf("%d", &start);
	printf("Modulus: ");scanf("%d", &mod);
	int end = start + 100; // Calculated
	while (start < end) {
		if (start % mod == 0) {
			printf("\n(%d) ...", start);
		}
		start = start + 1;;
	}
	return 0;
}







