#include <stdio.h>
//#include <float.h>

int main(void) {
   char first[80];  char last[80]; float balance = 0.0f;
   printf("First Name: ");
   scanf("%s", first);  // same as &first[0]
   printf("Last Name: ");
   scanf("%s", last);   // same as &last[0]
   printf("Deposit: ");
   scanf("%f", &balance);
   printf("%s, %s, Deposited %f\n", last, first, balance);
} // ActMyDeposit


