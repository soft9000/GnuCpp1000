#include <stdio.h>

struct OldStruct {	// 96 Bytes
	char name[80];
	long account = -1;
	float balance = 0.0F;
};

struct DynaStruct {  // 24 Bytes	
	char *name = NULL;
	long account = -1;
	float balance = 0.0F;
};

int main(void) {
	printf("%d, %d", sizeof(OldStruct), sizeof(DynaStruct));
return 0;
} // exSizeofStructsPointer*

