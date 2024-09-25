//Library book management program
#include <stdio.h>
int main() {
    int bookID, dueDate, returnDate, overDue, fineRate, fineAmount;
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter due date: ");
    scanf("%d", &dueDate);

    printf("Enter return date: ");
    scanf("%d", &returnDate);

    overDue = returnDate - dueDate;
    if (overDue <= 7) {
        fineRate = 20;
        fineAmount = fineRate * overDue;
    } else if (overDue > 7 && overDue <= 14) {
        fineRate = 50;
        fineAmount = fineRate * overDue;
    } else {
        fineRate = 100;
        fineAmount = fineRate * overDue;
    }

    printf("Book ID: %d\n", bookID);
    printf("Was due on date %d\n", dueDate);
    printf("Returned on date %d\n", returnDate);
    printf("Is %d day(s) overdue.\n", overDue);
    printf("Fine rate is Ksh %d per day.\n", fineRate);
    printf("Total fine amount is Ksh %.2d\n", fineAmount);
    return 0;
}
