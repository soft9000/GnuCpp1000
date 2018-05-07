#include <stdio.h>

// Changing Values
enum zYear {
	Jan, Feb, Mar, 
	Apr, May, Jun, 
	Jul, Aug, Sep, 
	Oct, Nov, Dec
	};

const char *zMonths[] = {
	"January", "February", "March",
	"April", "May", "June",
	"July", "August", "September",
	"October", "November", "December",
};

void ShowMonths(zYear val);

int main()
{
	for(int ss=Jan; ss <= Dec; ss++)
		ShowMonths((zYear)ss);
	return 0;
} // ActMonths

void ShowMonths(zYear val) {
	printf("Enum(%d)  \tHuman: %d is \t%s\n", 
		val, 
		val + 1, 
		zMonths[val]);
}
