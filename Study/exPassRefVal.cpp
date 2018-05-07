#include <stdio.h>

void PassCopy(int value) {
   value *= 10;
   printf("COPY: Value is %d\n", value);
}

void PassPointer(int *value) {
   *value *= 10;
   printf("POINTER: Value is %d\n", *value);
}

int main() {
	int value = 10;
	puts("***** Pass Copy ('by value')");
	PassCopy(value);
	printf("Value AFTER copy is %d\n", value);
	puts("");
	puts("***** Pass Pointer ('by reference')");
	PassPointer(&value);
	printf("Value AFTER POINTER is %d\n", value);
	return 0;
} // exPassRefVal







