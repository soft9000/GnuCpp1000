#include <stdio.h>
#include <malloc.h>

struct Deposit {
   char  first[80];  
   char  last[80]; 
   float balance = 0.0f;
};

int main(void) {
	// malloc(size_t)
	Deposit *deposit = 
		(Deposit *) malloc(sizeof(Deposit));
	printf("First Name: ");
	scanf("%s", deposit->first);
	printf("Last Name: ");
	scanf("%s", deposit->last);
	printf("Deposit: ");
	scanf("%f", &deposit->balance);
	printf("%s, %s, Deposited %f\n", 
		deposit->last, 
		deposit->first, 
		deposit->balance
	);
	free(deposit); // free(void *)
} // ActPointerClassic


