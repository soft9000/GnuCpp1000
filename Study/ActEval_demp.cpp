#include <stdio.h>

int main() {	
	float age; float comp = .99;
	scanf("%f", &age);
	if (age < comp) {
		printf("%.02f < %.02f", age, comp);
		return 1;
	}
	printf("%.02f > %.02f", age, comp);
	return 0;
}







