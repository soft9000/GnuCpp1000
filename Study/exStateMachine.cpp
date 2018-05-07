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
	Machine[Walk]();
	Machine[Walk] = Error;	// New "State"
	Machine[Walk]();

	return 0;
}

