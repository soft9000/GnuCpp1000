#include <stdio.h>

typedef int Value;

void add(Value info, float data) {
	float zint = 0.0;
	zint = info + data;
	printf("size(%d), value(%.02f)\n", 
		sizeof(Value), 
		zint);
}

int main(void) {
	Value my;
	add(my, 10);
} // ActTypeDef1*

