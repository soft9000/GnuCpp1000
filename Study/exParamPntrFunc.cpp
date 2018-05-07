#include <stdio.h>

void Undefined(const char *psz)
	{printf("Is Undefined %s\n", psz);}
void Defined(const char *psz)
	{printf("Is Defined %s\n", psz);}
 
int main()
{	
	void (*Action)(const char *) = Undefined;
	Action("First");
	Action = Defined;	// New "State"
	Action("Next");
	return 0;
} // exParamPntrFunc

