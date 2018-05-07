#include <stdio.h>

#include "DepositDynamic.hpp"

int main(void) {
	Deposit *dep = Deposit::ReadDeposit();
	dep->PrintDeposit();
	delete dep;
} // DepositDynamic.cpp


