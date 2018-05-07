#include <stdio.h>

int main() {
	unsigned short bits = 0x2;
	printf("%d ", bits);
	printf("%d ", bits | 0x4); // 6
	
	printf("%d ", 2 & 8); // 0
	printf("%d ", 2 | 8); // 10

	printf("%d \n", 2 ^ 10); // 8

	printf("%08X \n", 2); // 00000002
	printf("%X \n", ~ 2); // FFFFFFFD
	
} // ex16







