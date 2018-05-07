struct Deposit {
	char  first[80];  
	char  last[80]; 
	float balance = 0.0f;

	static Deposit *ReadDeposit(void) {
		Deposit *deposit = new Deposit;
		printf("First Name: ");
		scanf("%s", deposit->first);
		printf("Last Name: ");
		scanf("%s", deposit->last);
		printf("Deposit: ");
		scanf("%f", &deposit->balance);
		return deposit; // "Factory"
	}

	static void PrintDeposit(Deposit *deposit) {
		printf("%s, %s, Deposited %.02f\n", 
			deposit->last, 
			deposit->first, 
			deposit->balance
		);
	}

};