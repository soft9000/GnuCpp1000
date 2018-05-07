#include <stdio.h>
#include <stdlib.h>

int main(void) {
   for(int ss = 0; ss < 10; ss++) {
      long intA = rand();
      long intB = rand();
      printf("%10ld\t+\t%10ld\t=\t%ld\n", 
	intA, intB, intA + intB);
   }   
}


