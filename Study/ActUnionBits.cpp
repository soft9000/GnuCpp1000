#include <stdio.h>
#include "ShowBits.hpp"

struct TheBits {
	char b1 : 1; 
	char b2 : 1; 
	char b3 : 1; 
	char b4 : 1; 
	char b5 : 1; 
	char b6 : 1; 
	char b7 : 1;
	char b8 : 1;
};

union MyUnion {
	unsigned char 	Code;
	TheBits 		Bits;
};
	
int main(int argc, char *argv[]) {
	MyUnion my_union;
	my_union.Code = 0xFF;
	my_union.Bits.b1 = 0;
	my_union.Bits.b2 = 0;
	my_union.Bits.b8 = 0;
	printf("Size = %d byte(s), Pattern is %s\n", 
		sizeof(MyUnion), 
		ShowBits(my_union.Code)
		);
} // ActUnionBits


