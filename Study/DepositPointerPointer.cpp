#include <stdio.h>
#include "Deposit.hpp"


void PrintDeposit(const char *psz, Deposit *deposit) {
	printf("%s:\t %s, %s, Deposited %.02f\n",
		psz,
		deposit->last, 
		deposit->first, 
		deposit->balance
	);
}

void ReadDeposit(Deposit *deposit) {
	if(deposit == NULL) {
		puts("Error 101: Null Pointer.");
		return;
	}
	printf("First Name: ");
	scanf("%s", deposit->first);
	printf("Last Name: ");
	scanf("%s", deposit->last);
	printf("Deposit: ");
	scanf("%f", &deposit->balance);
}

Deposit *ReadDeposit(void) {
	Deposit *zdeposit = new Deposit;
	ReadDeposit(zdeposit);
	return zdeposit;
}

void ReadDeposit(Deposit **result) {
	Deposit *deposit = new Deposit;
	ReadDeposit(deposit);
	(*result) = deposit; // LEAK ALERT!
}

int main(void) {
	if(1) {	
		Deposit *dep = ReadDeposit();
		PrintDeposit("FACTORY", dep);
		delete dep;
	} else {
		Deposit *dep = new Deposit;
		Deposit **pdep;
		*pdep = dep;	
		ReadDeposit(*pdep);
		PrintDeposit("PTR_PTR", *pdep);
		delete *pdep;
	}

	puts("Done.");
	return 0;
} // DepositPointerPointer.cpp


