//operation functions
#include <stdio.h>
#include <math.h> //built in function

//function prototypes
int sum (int x, int y);
int subtract (int x, int y);
int multiply (int x, int y);
float divide (float a, float b);

int main() {
    int num1, num2;
    float num3, num4, result;
    
    //user inputs
    printf("Enter two numbers to sum: ");
    scanf("%d %d", &num1, &num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum(num1, num2));
    
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &num1, &num2);
    printf("The difference of %d and %d is: %d\n", num1, num2, subtract(num1, num2));
    
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &num1, &num2);
    printf("The product of %d and %d is : %d\n", num1, num2, multiply(num1, num2));
    
    printf("Enter two numbers to divide: ");
    scanf("%f %f", &num3, &num4);
    if (num4 != 0) { //checking division by zero
        result = divide(num3, num4);
        printf("The quotient of %.2f and %.2f is: %.2f\n", num3, num4, result);
    } else {
        printf("Error: Division by zero!\n");
    }
    return 0;
}

//function definition
int sum (int x, int y) {
    return x + y;
}
int subtract (int x, int y) {
    return x - y;
}
int multiply (int x, int y) {
    return x * y;
}
float divide (float a, float b) {
    return a / b;
}