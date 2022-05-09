#include <stdio.h>

int main()
{
    int userInputNumber1;
    int userInputNumber2;
    printf("Enter the first number: ");
    scanf("%d", &userInputNumber1);
    printf("Enter the second number: ");
    scanf("%d", &userInputNumber2);
    printf("The sum of the first number and the second number is %d \n", userInputNumber1 + userInputNumber2);
    printf("The difference of the first number and the second number is %d \n", userInputNumber1 - userInputNumber2);
    printf("The product of the first number and the second number is %d \n", userInputNumber1 * userInputNumber2);
    printf("The quotient of the first number and the second number is %d \n", userInputNumber1 / userInputNumber2);
    return 0;
}