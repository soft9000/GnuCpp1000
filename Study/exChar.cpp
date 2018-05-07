#include <stdio.h>

int main() {
	char name[80]; // Local Memory
	printf("Name: ");
	int num = scanf("%s", name);
	printf("Scanned %d, as %s", num, name);
	printf(", %s[0] is %c, or '%d'!", 
		name, 
		name[0], 
		name[0]);
	return 0;
} // exChar


