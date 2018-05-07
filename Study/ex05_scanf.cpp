#include <stdio.h>

int main() {
	char name[80]; // Local Memory
	printf("Name: ");
	int num = scanf("%s", name);
	printf("Got %d, as %s", num, name);
	return 0;
} // ex05


