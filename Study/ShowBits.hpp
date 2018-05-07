#ifndef MY_BITS
#define MY_BITS
#include <stdio.h>
#include <malloc.h>

char *DumpBits(unsigned char value, int len) {
	char *result = (char *)malloc(len + 1);
	char mask = 1;
	for(int ss = 0; ss < len; ss++) {
		int actual = len - ss - 1;
		result[actual] = '0';
		if(value & mask) {
			result[actual] = '1';
		}
		value = value >> 1;
	}
	result[len] = 0; // END STRING
	return result;
}
char *ShowBits(unsigned char value) {
	int len = sizeof(value) * 8;
	return DumpBits(value, len);
}
char *ShowBits(unsigned int value) {
	int len = sizeof(value) * 8;
	return DumpBits(value, len);
}
char *ShowBits(int value) {
	int len = sizeof(value) * 8;
	return DumpBits(value, len);
}
#endif

