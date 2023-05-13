#include <stdio.h>

int main() {
   int num, reverse_num=0, remainder;

   printf("Enter an integer: ");
   scanf("%d", &num);

   while (num != 0) {
      remainder = num % 10;
      reverse_num = reverse_num*10 + remainder;
      num /= 10;
   }

   printf("The reversed number is: %d", reverse_num);
   return 0;
}
//output 
Enter an integer: 1234
The reversed number is: 4321
