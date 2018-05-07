#include <stdio.h>

int ok(int value) {
	printf("Evaluating: %d\n", value);
	return 1;
}

int main() {
	printf("'and'\n");	
	if (ok(3) && ok(12)) 
		{
			puts("Okay!");
		}
	printf("'or'\n");	
	if (ok(3) || ok(12)) 
		{
			puts("Okay!");
		}
} // ex12







