#include <stdio.h>

/*
(done) Update our calculator to accept * and /
(done) Update our main to accept and process parameters.
(done) Re-factoring code to use a calc function:
     1.) INPUT - Operations and Balance
	 2.) OUTPUT - New Balance
*/

float DoCalc(const char *op, float data, float balance) {
	printf("%.02f %s %.02f \t= ", balance, op, data);
	if(op[0] == '+') {
		balance = balance + data;
	}
	if(op[0] == '-') {
		balance = balance - data;
	}
	if(op[0] == '/') {
		balance = balance / data;
	}
	if(op[0] == '*') {
		balance = balance * data;
	}
	printf("%.02f\n", balance);
	return balance;
}

float DoCalc(const char *op, const char *data, float balance) {
	float data2 = 0.0F;
	int num = sscanf(data, "%f", &data2);
	if(num == 1) {
		return DoCalc(op, data2, balance);
	}
	return balance;
}

void DoNormal(void) {
   char op[80];
   float balance = 0.0F;
   float data = balance;
   int num = 2;
   while(num == 2) {
	   printf("\n: ");
	   num = scanf("%s %f", op, &data);
	   if(num == 2) {
			balance = DoCalc(op, data, balance);
		}
   }
   printf("=====\nTOTAL: %.02f\n", balance);
}

int main(int argc, char *argv[]) {
   printf("\nWelcome!\n");
   
   if(argc == 1) {
	   DoNormal();
	   return 0;
   }
   
   float balance = 0.0F;
   for(int ss = 1; ss < argc; ss = ss + 2) {
		balance = DoCalc(argv[ss], argv[ss+1], balance);
	}
   printf("=====\nParam TOTAL: %.02f\n", balance);

   return 0;
}