#include <stdio.h>

int main() {
   int age;

   printf("Enter your age: ");
   scanf("%d", &age);

   if (age >= 18) {
      printf("You are eligible to vote.\n");
   } else {
      printf("You are not eligible to vote.\n");
   }

   return 0;
}

//Output
Enter your age: 20
You are eligible to vote.

Enter your age: 16
You are not eligible to vote.
