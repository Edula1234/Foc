#include <stdio.h>

int main() {
   int decimal_num, binary_num=0, base=1, remainder;

   printf("Enter a decimal integer: ");
   scanf("%d", &decimal_num);

   while (decimal_num > 0) {
      remainder = decimal_num % 2;
      binary_num += remainder * base;
      base *= 10;
      decimal_num /= 2;
   }

   printf("The binary equivalent is: %d", binary_num);
   return 0;
}
//output 
Enter a decimal integer: 23
The binary equivalent is: 10111
