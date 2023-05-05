#include <stdio.h>

int main() {
    int num1, num2;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    quotient = (float)num1 / num2;

    printf("The quotient of %d divided by %d is %.2f", num1, num2, quotient);

    return 0;
}
