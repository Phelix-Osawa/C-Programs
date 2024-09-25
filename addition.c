// Program prompting user to enter numbers and add them
#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum is: %d", sum);
    return 0;
}