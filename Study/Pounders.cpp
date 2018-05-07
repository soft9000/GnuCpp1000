#include <stdio.h>
#include <stdlib.h>

#define FOO
#undef FOO

int main(int argc, char *argv[]) {
#ifndef FOO
	puts("NO FOO!");
#else
	puts("GOT FOO!");
#endif	
	return 0;
}

