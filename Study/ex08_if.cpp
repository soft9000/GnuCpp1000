#include <stdio.h>

int main() {	
	int age;
	scanf("%d", &age);
	if (age < 0) {
		printf("%d < 0", age);
		return 1;
	}
	printf("%d > 0", age);
	return 0;
}







