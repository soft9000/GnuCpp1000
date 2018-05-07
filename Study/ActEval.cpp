#include <stdio.h>

int main() {
   float age; float comp = .99;
   printf("Enter value: ");
   scanf("%f", &age);
   if (age < comp) {
      printf("%.02f < %.02f", age, comp);
      return 1;
   }
   printf("%.02f GTE %.02f", age, comp);
   return 0;
}