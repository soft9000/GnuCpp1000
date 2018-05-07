#include <stdio.h>

// Machine States 
enum States {
	Run, Walk, Sleep, All
	};
	
void Undefined()	{puts("Is Undefined");}
void Defined() 		{puts("Is Defined");}
void Error() 		{puts("Error!");}
 
int main()
{	
	void (*Machine[All])() = {
		Undefined, Defined, Defined
	};	
	for (int ss = Run; ss < All; ss++) {
	  Machine[ss]();
	}	
	puts("=====");
	Machine[Walk] = Error;	// New "State"
	for (int ss = Run; ss < All; ss++) {
	  Machine[ss]();
	}
	return 0;
} // ActStMach



