#include <stdio.h>
#include "Deposit.hpp"

#define SIMPLE

#ifdef SIMPLE
	typedef int Value;
#else
	struct Value {
		int age = 0;
	};
#endif

void add(Value info, int data) {
	int zint = 0;
#ifdef SIMPLE
	zint = info + data;
#else
	zint = info.age + (data * 2);
#endif
	printf("size(%d), value(%d)\n", 
		sizeof(Value), 
		zint);
}

int main(void) {
	Value my;
	add(my, 10);
} // ActTypeDef*
