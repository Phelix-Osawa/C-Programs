// Library system with functions
#include <stdio.h>

//function prototypes
int calculateOverdue (int dueDate, int returnDate);
int calculateFine (int overDue);
void displayFineDetails (int bookID, int dueDate, int returnDate, int overDue, int fineRate, int fineAmount);

int main() {
    int bookID, dueDate, returnDate, overDue, fineRate, fineAmount;
    //user input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);
    
    //calculate overdue days
    overDue = calculateOverdue(dueDate, returnDate);
    
    //calculate fine
    fineAmount = calculateFine(overDue);
    
    //calculating fine rate
    if (overDue <= 7) {
        fineRate = 20;
    } else if (overDue > 7 && overDue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }
    
    //Displaying fine details
    displayFineDetails (bookID, dueDate, returnDate, overDue, fineRate, fineAmount);
    return 0;
}

//defining functions
int calculateOverdue (int dueDate, int returnDate) {
    return returnDate - dueDate;
}

int calculateFine (int overDue) {
    if (overDue <= 7) {
        return 20 * overDue;
    } else if (overDue > 7 && overDue <= 14) {
        return 50 * overDue;
    } else {
        return 100 * overDue;
    }
}

void displayFineDetails (int bookID, int dueDate, int returnDate, int overDue, int fineRate, int fineAmount) {
    printf("\nBook ID: %d\n", bookID);
    printf("Was due on date %d\n", dueDate);
    printf("Returned on date %d\n", returnDate);
    printf("Is %d day(s) overdue.\n", overDue);
    printf("Fine rate is Ksh %d per day.\n", fineRate);
    printf("Total fine amount is Ksh %d\n", fineAmount);
}