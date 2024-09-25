//Grading system program
#include <stdio.h>
int main() {
    int subject1, subject2, subject3, average;
    printf("Enter subject1 score: ");
    scanf("%d", &subject1);

    printf("Enter subject2 score: ");
    scanf("%d", &subject2);

    printf("Enter subject3 score: ");
    scanf("%d", &subject3);

    average = (subject1+subject2+subject3)/3;
    printf("Student average score is %d marks.\n", average);
    if (average > 69) {
        printf("Grade: A");
    } else if (average > 59 && average < 70) {
        printf("Grade: B");
    } else if (average > 49 && average < 60) {
        printf("Grade: C");
    } else if (average > 39 && average < 50) {
        printf("Grade: D");
    } else {
        printf("Grade: E");
    }
    return 0;
}
