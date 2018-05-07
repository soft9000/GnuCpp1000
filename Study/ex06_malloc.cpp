#include <stdio.h>
// #include <malloc.h>
#include <memory>

int main() {
	// Allocate "Global Memory"
	char *name = (char *) malloc(80);
	printf("Name: ");
	int num = scanf("%s", name);
	printf("Got %d, as %s", num, name);
	free(name); // Release Global Memory!
	return 0;
} // ex06


