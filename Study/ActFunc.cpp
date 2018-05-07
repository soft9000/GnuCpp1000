#include <stdio.h>

//c++ -DTESTING ActFunc* ; ./a.exe
//#define TESTING

#define PRINT_MACRO(a) puts(a)

inline void print_macro(const char *psz) {
	puts(psz);
}

int main(void) {
	print_macro("Started!");	

#ifdef TESTING	
	PRINT_MACRO("Testing CODE ELIMINATION");
#else
	print_macro("Testing Inline Macro");
#endif

	PRINT_MACRO("Done.");
	return 0;
} // ActFunc


