//For loop program to calculate cube to a given no of terms
#include <stdio.h>

int main() {
    int i, terms;
    
    //enter where to start and stop
    printf("Enter where to start: ");
    scanf("%d", &i);
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    for (i; i <= terms; i++) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i*i*i);
    }
    return 0;
}