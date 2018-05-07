#include <stdio.h>

//typedef int Value;
typedef long Value;

Value add(Value data, float val) {
	return (data + val);
}

int main(void) {
	Value my;
	auto result = add(my, 10);
	printf("sizeis(%d) bytes.\n", sizeof(result));
} // exAuto*

