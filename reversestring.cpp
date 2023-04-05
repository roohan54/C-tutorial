#include <stdio.h>
#include <string.h>

int main() {
   char str[100];

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   // Remove the newline character from the end of the string
   str[strcspn(str, "\n")] = 0;

   strrev(str);

   printf("Reversed string: %s\n", str);

   return 0;
}

