#include <stdio.h>

#include "Deposit.hpp"
typedef Deposit Value;

void add(Value info, float data) {
	float zint = 0.0;
	zint = info.balance + data;
	printf("size(%d), value(%.02f)\n", 
		sizeof(Value), 
		zint);
}

int main(void) {
	Value my;
	add(my, 10);
} // ActTypeDef2*


