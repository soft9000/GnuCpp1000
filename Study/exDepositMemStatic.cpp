#include <stdio.h>
#include <memory.h>

// Encapsulating memory allocation / release choices

#define BUFFER_SIZE 80
struct Deposit {
	char  first[BUFFER_SIZE];  
	char  last[BUFFER_SIZE]; 
	float balance = 0.0f;
	
	static Deposit *Create(void) {
		Deposit *result = new Deposit;
		//::memset(result->first, 0, BUFFER_SIZE);
		//::memset(result->last, 0, BUFFER_SIZE);
		// ~~ OR ~~ this is usually FASTER - ASCIIZ!
		result->last[0] = 0;
		result->first[0] = 0;
		return result;
	}
	
	static void Destroy(Deposit *pdep) {
		if(pdep != NULL) {
			pdep->pdum = "No GC!";
			puts("deleting...");
			delete pdep;
		}
	}
	
	void Report(void) {
	printf("'%s', '%s', %.02f\n", 
		this->first, 
		this->last, 
		this->balance
		);
	}
	
	const char *pdum = "Doh!";
	void dumb(void) {
		puts(this->pdum);
	}
};

int main(void) {
	if(0) {
		puts("*** STATIC ***");
		Deposit dStack;
		dStack.Report();
	} else {
		puts("*** DYNAMIC ***");
		Deposit *dep = Deposit::Create();
		printf("bytes(%d) \tPOINTER\n", sizeof(dep));
		printf("bytes(%d) \tOBJECT\n", sizeof(*dep));
		// Good idea, or bad?
		// memset(dep, 0, sizeof(*dep));

		dep->dumb();

		Deposit::Destroy(dep);
		// Exploit?	
		dep->dumb();

		Deposit *dep2 = Deposit::Create();
		dep->dumb();

	}
	return 0;
} // exDepositMemStatic