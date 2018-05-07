#include <stdio.h>

int main() {
	char name[80]; // Local Memory
	int age;
	printf("Name: ");
	int num = scanf("%s", name);
	printf("Age: ");
	num += scanf("%d", &age);
	printf("Got %d: '%s' is %d\n", 
		num, name, age);
	return 0;
} // ex07


