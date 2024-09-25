// C variables and Data types
#include <stdio.h> // Preprocessor directive
int main() {
    // declaration & initialization
    char c; //%C
    char name[6]; //%s
    int age; //%d
    float height; //%f
    double salary; //%lf

    printf("Enter your character: ");
    scanf("%c", &c);
    printf("Your character is %c\n", c);

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Welcome %s\n", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You're %d years old.\n", age);

    printf("Enter your height: ");
    scanf("%f", &height);
    printf("You're %.1f FT tall\n", height);

    printf("Enter your salary: ");
    scanf("%lf", &salary);
    printf("Your salary is %.2lf KSH\n", salary);
    return 0;
}
