#include <stdio.h>

int main() {
   float principle, rate, time, interest;

   printf("Enter principle amount: ");
   scanf("%f", &principle);

   printf("Enter rate of interest: ");
   scanf("%f", &rate);

   printf("Enter time period (in years): ");
   scanf("%f", &time);

   interest = (principle * rate * time) / 100;

   printf("\nSimple interest = %.2f\n", interest);

   return 0;
}
//output 
Enter principle amount: 5000
Enter rate of interest: 6.5
Enter time period (in years): 2

Simple interest = 650.00
