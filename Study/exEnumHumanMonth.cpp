#include <stdio.h>

// Changing Values
enum zYears {
	Jan='a', Feb, Mar, 
	Apr, May, Jun, 
	Jul, Aug, Sep, 
	Oct, Nov, Dec='z'
	};

int main()
{
	printf("Jan(%c)\n", zYears::Jan);
	printf("   November(%c)\n", zYears::Nov);
	printf("Dec(%c)?\n", zYears::Dec);
	return 0;
} // exEnumHumanMonth

