//while loop program to calculate cube to a given no of terms
#include <stdio.h>

int main() {
    int i, terms;
    
    //enter where to start and no of terms
    printf("Enter where to start: ");
    scanf("%d", &i);
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    while (i <= terms) {
        printf("Number is: %d and the cube of %d is: %d\n", i, i, i*i*i);
        i++;
    }
    return 0;
}