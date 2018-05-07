#include <stdio.h>

void Undefined(const void *psz)
	{printf("Is Undefined %s\n", psz);}
void Defined(const void *psz)
	{printf("Is Defined %s\n", psz);}
 
int main()
{	
	void (*Action)(const void *) = Undefined;
	Action("First");
	Action = Defined;	// New "State"
	Action("Next");
	return 0;
} // exVoidPntr

