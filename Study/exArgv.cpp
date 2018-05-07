#include <stdio.h>

int main(int argc, char *argv[]) {
	// What is in argv? Depends!
	for(int ss = 0; ss < argc; ss++) {
		printf("%d.) \t %s\n", ss, argv[ss]);
	}	
} // exArgv


