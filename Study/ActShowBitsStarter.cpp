
#include <stdio.h>
#include <malloc.h>

char *ShowBits(unsigned char value) {
	int len = sizeof(value) * 8;
	char *result = (char *)malloc(len + 1);
	char mask = 1;
	// TODO: Show the bits
	result[len] = 0; // END STRING
	return result;
}

int main(void) {
	printf("DEC\tHEX\tBIN\n");
	int pow = 2;
	for(unsigned char ss = 1; ss != 0; ss++) {	
		// TODO: Call ShowBits(...)
	}
	return 0;
} // ActShowBits







