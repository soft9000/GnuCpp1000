#include <stdio.h>

int main(void) {
   printf("\nWelcome!\n");
   char op[80];
   float balance = 0.0F;
   float data = balance;
   int num = 2;
   while(num == 2) {
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
}