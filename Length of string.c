#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int len = 0;
   
   printf("Enter a string: ");
   scanf("%s", str);

   // Iterate through the string until the null character is reached
   while (str[len] != '\0') {
      len++;
   }
   
   printf("Length of the string is: %d", len);
   return 0;
}
//output 
Enter the string: Pranith 
The length of string is: 7
