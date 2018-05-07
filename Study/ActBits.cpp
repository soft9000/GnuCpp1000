#include <stdio.h>

int main() {
	int value = 1;
	while(value <= 255) {
		value = value << 1;
		printf("%d \t= 0x%04X\n", 
		value,
		value);
	}
	
} // ActBits.cpp


