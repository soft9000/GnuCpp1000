#include <stdio.h>

void Undefined()	{puts("Is Undefined");}
void Defined() 		{puts("Is Defined");}
 
int main()
{	
	void (*Action)() = Undefined;
	Action();
	Action = Defined;	// New "State"
	Action();
	return 0;
} // exPntrFunc

