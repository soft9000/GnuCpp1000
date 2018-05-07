
#include <stdio.h>
#include <malloc.h>

#include "ShowBits.hpp"

int main(void) {
	printf("DEC\tHEX\tBIN\n");
	int pow = 2;
	for(short ss = 1; ss != 0; ss++) {	
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
} // ActShowBits2







