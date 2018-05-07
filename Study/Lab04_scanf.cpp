#include <stdio.h>

int main() {
	char name[80]; // Local Memory
	int age; float balance;
	printf("Name, Age, Balance: ");
	int num = scanf("%s\t%d\t%f", 
		name, &age, &balance);
	printf("Got %d: %s, %.02f, %d\n", 
		num, name, balance, age);
	return 0;
} // Lab04


