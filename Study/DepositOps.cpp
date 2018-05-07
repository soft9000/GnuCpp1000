#include <stdio.h>

#include "DepositOps.hpp"

int main(void) {
	Deposit *dep = Deposit::ReadDeposit();
	Deposit::PrintDeposit(dep);
	delete dep;
} // DepositOps.cpp


