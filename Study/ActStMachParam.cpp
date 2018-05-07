#include <stdio.h>

// Machine States 
enum States {
	Run, Walk, Sleep, All
	};
	
void Undefined(const char *psz)	{printf("Undefined: %s\n", psz);}
void Defined(const char *psz) 	{printf("Defined: %s\n", psz);}
void Error(const char *psz) 	{printf("Error: %s!\n", psz);}
 
int main()
{	
	void (*Machine[All])(const char *) = {
		Undefined, Defined, Defined
	};	
	for (int ss = Run; ss < All; ss++) {
	  Machine[ss]("Old");
	}	
	puts("=====");
	Machine[Walk] = Error;	// New "State"
	for (int ss = Run; ss < All; ss++) {
	  Machine[ss]("New");
	}
	return 0;
} // ActStMachParam



