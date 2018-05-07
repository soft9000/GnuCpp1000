#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("What is in argv? Depends!\r\n");
	for(int ss = 0; ss < argc; ss++) {
		printf("%d.) \t %s\n", ss, argv[ss]);
	}
	printf("Got %d", argc);	
} // ActArgv


