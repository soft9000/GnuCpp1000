#include <stdio.h>

int main() {	
	int ss = 0;
	char str[80]; 
	scanf("%s", &str);
	while (1) {
		if (str[ss] == 0) {
			// Zero-terminated Strings
			printf("\n\nDone!\n");
			return 0;
		}
		printf("char(%c)\t", str[ss]);
		printf("hex(%X)\t", str[ss]);
		printf("oct(%o)\t", str[ss]);
		if (str[ss] == '+') {
			printf(" ... Plus!");
		}
		ss = ss + 1;
		printf("\n");
	}
	return ss;
} // ex09







