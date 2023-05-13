#include <stdio.h>

int main() {
   int binary_num, decimal_num=0, base=1, remainder;

   printf("Enter a binary integer: ");
   scanf("%d", &binary_num);

   while (binary_num > 0) {
      remainder = binary_num % 10;
      decimal_num += remainder * base;
      base *= 2;
      binary_num /= 10;
   }

   printf("The decimal equivalent is: %d", decimal_num);
   return 0;
}
//output 
Enter a binary integer: 10111
The decimal equivalent is: 23
