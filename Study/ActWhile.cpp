#include <stdio.h>

int main() {	
	int start, end; // Multi-initialization
	printf("Start: ");scanf("%d", &start);
	printf("End: ");scanf("%d", &end);
	while (start < end) {
		printf("\n(%d) ...", start);
		start = start + 1;;
	}
	return 0;
}







