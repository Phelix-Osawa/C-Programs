//do while loop to calculate cube upto a given no of terms
#include <stdio.h>
int main() {
    int i, terms;
    
    //enter where to start and no of terms
    printf("Enter where to start: ");
    scanf("%d", &i);
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    do {
        printf("Number is: %d and the cube of %d is: %d\n", i, i, i*i*i);
        i++;
    } while (i <= terms);
    
    return 0;
}