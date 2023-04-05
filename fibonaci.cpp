#include <stdio.h>

int main() {
   int n, i, fib1 = 0, fib2 = 1, next;

   printf("Enter the number of terms: ");
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   for (i = 0; i < n; i++) {
      if (i <= 1) {
         next = i;
      }
      else {
         next = fib1 + fib2;
         fib1 = fib2;
         fib2 = next;
      }
      printf("%d ", next);
   }

   return 0;
}

