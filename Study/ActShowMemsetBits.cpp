
#include <stdio.h>
#include <malloc.h>
#include <string.h> // memset

char *ShowBits(unsigned char value) {
	int len = sizeof(value) * 8;
	char *result = (char *)malloc(len + 1);
	memset(result, '0', len);
	char mask = 1;
	for(int ss = 0; ss < len; ss++) {
		if(value & mask) {
			result[len - ss - 1] = '1';
		}
		value = value >> 1;
	}
	result[len] = 0; // END STRING
	return result;
}

int main(void) {
	printf("DEC\tHEX\tBIN\n");
	int pow = 2;
	for(unsigned char ss = 1; ss != 0; ss++) {	
		char * psz = ShowBits(ss);
		printf("%d\t0x%X\t%s", ss, ss, psz);
		if(ss == pow) {
			printf(" (POW)");
			pow = pow * 2;
		}
		printf("\n");
		free(psz);			
	}
	return 0;
} // ActShowBits







