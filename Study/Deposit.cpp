#include <stdio.h>

#include "Deposit.hpp"

Deposit *ReadDeposit(void) {
	Deposit *deposit = new Deposit;
	printf("First Name: ");
	scanf("%s", deposit->first);
	printf("Last Name: ");
	scanf("%s", deposit->last);
	printf("Deposit: ");
	scanf("%f", &deposit->balance);
	return deposit;
}

void PrintDeposit(Deposit *deposit) {
	printf("%s, %s, Deposited %f\n", 
		deposit->last, 
		deposit->first, 
		deposit->balance
	);
}

int main(void) {
	Deposit *dep = ReadDeposit();
	PrintDeposit(dep);
	delete dep; // Who remembered?

} // Deposit.cpp


