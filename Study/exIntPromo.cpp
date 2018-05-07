#include <stdio.h>

int main(void) {
	char ch = 21;
	printf("Char size is:\t %d\n", 
		sizeof(ch));
	int ichar = ch;
	printf("Int size is:\t %d, value %d",
		sizeof(ichar), 
		ichar);	
}

