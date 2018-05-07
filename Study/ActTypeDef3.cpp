#include <stdio.h>

#define SIMPLE

#ifndef SIMPLE
#include "Deposit.hpp"
typedef Deposit Value;

#else
typedef int Value;
#endif


void add(Value info, float data) {
	float zint = 0.0;
#ifdef SIMPLE
	zint = info + data;
#else
	zint = info.balance + data;
#endif
	printf("size(%d), value(%.02f)\n", 
		sizeof(Value), 
		zint);
}

int main(void) {
	Value my;
	add(my, 10);
} // ActTypeDef3*
