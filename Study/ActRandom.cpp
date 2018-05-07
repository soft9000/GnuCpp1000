#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   // srand(time(NULL));
   for(int ss = 0; ss < 10; ss++) {
      printf("%d\n", rand());
   }   
}


