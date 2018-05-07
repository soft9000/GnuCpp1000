#include <stdio.h>

int main() {	
	int ss = 0;
	char str[80]; 
	scanf("%s", &str);
	bool isRunning = true;
	do {
		if (str[ss] == 0) {
			// Zero-terminated Strings
			printf("\n\nDone!\n");
			goto my_exit;
		}
		printf("char(%c)\t", str[ss]);
		printf("hex(%X)\t", str[ss]);
		printf("oct(%o)\t", str[ss]);
		if (str[ss] == '+') {
			printf(" ... Plus!");
		}
		ss = ss + 1;
		printf("\n");
	} while (isRunning);
	my_exit:
	return ss;
} // exDoWhileGOTO







