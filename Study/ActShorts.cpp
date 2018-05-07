#include <stdio.h>

int isOk(float value) {
	if (value >= 0) {
		return 1;
	}
	return 0;
}

// OR:   We can ONLY quit AFTER balance < 0
// AND:  We stop upon EITHER condition!
int main(void) {
   printf("\nWelcome!\n");
   char op[80];
   float balance = 0.0F;
   float data = balance;
   int num = 2;
   while((isOk(balance) != 0) && num == 2) {
	   printf("\n: ");
	   num = scanf("%s %f", op, &data);
	   if(num == 2) {
		   printf("%.02f %s %.02f \t= ", balance, op, data);
		   if(op[0] == '+') {
				balance = balance + data;
		   }
		   if(op[0] == '-') {
				balance = balance - data;
		   }
		   printf("%.02f\n", balance);
		}
   }
   printf("=====\nTOTAL: %.02f\n", balance);
   return 0;
} // ActShorts