#include <stdio.h>

// New Type! 
enum zYears{
	Jan, Feb, Mar, 
	Apr, May, Jun, 
	Jul, Aug, Sep, 
	Oct, Nov, Dec
	};

// Prototype
void dump_month(const char *, zYears);

int main()
{
	dump_month("zYears::Oct", zYears::Oct);	    
	return 0;
} // exEnumMonth2

// Links to:
void dump_month(const char *pcsz, zYears year) {
	printf("%s is month #%02d\n", pcsz, year + 1);
}

