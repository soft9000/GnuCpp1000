#include <stdio.h>
#include <memory.h>

// Encapsulating memory allocation / release choices

#define BUFFER_SIZE 80
struct Deposit {
	char  first[BUFFER_SIZE];  
	char  last[BUFFER_SIZE]; 
	float balance = 0.0f;
	
	static Deposit *Clone(Deposit *pdep) {
		Deposit *result = Deposit::Create();
		result->balance = pdep->balance;
		::memcpy(result->first, pdep->first, BUFFER_SIZE);
		::memcpy(result->last, pdep->last, BUFFER_SIZE);
		return result;
	}
	
	static Deposit *Create(void) {
		Deposit *result = new Deposit;
		//::memset(&result->first, 0, BUFFER_SIZE);
		//::memset(&result->last, 0, BUFFER_SIZE);
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
	puts("*** CLONE ***");
	Deposit dStack;
	scanf("%s", dStack.first);
	scanf("%s", dStack.last);
	dStack.balance = 99.12;
	Deposit *pdep = Deposit::Clone(&dStack);
	pdep->Report();
	Deposit::Destroy(pdep);
	return 0;
} // exDepositMemClone