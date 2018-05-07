#include <stdio.h>

// Integral constants 
enum zYear {
	Jan, Feb, Mar, 
	Apr, May, Jun, 
	Jul, Aug, Sep, 
	Oct, Nov, Dec, All
	};

void report(zYear ss, float zBal) {
	printf("Month: %d\t $%.02f\n", ss + 1, zBal);
}

int main()
{
	if(sizeof(int) == sizeof(zYear::May)) puts("Same!");
	
	float bal[All];
	// Monthly Balances
	float prev = 12.21F;
	for (int ss = Jan; ss < All; ss++) {
	  bal[ss] = (prev *=  2); // clarification ()'s
	}
	// Monthly Report
	for (int ss = Jan; ss < zYear::All; ss++) {
		report((zYear)ss, bal[ss]);
	}	
	return 0;
} // ActEnumMonth

