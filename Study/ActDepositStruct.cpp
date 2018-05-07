#include <stdio.h>

struct Deposit {
   char  first[80];  
   char  last[80]; 
   float balance = 0.0f;
};

int main(void) {
	Deposit deposit;
	printf("First Name: ");
	scanf("%s", deposit.first);
	printf("Last Name: ");
	scanf("%s", deposit.last);
	printf("Deposit: ");
	scanf("%f", &deposit.balance);
	printf("%s, %s, Deposited %.02f\n", 
		deposit.last, 
		deposit.first, 
		deposit.balance
	);
} // ActDepositStruct


