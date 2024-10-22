#include <stdio.h>
#include <string.h>

struct Book {
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
} book1, book2;

int main() {
    //Book 1
    strcpy(book1.title, "Introduction to C Programming");
    strcpy(book1.author, "John Smith");
    book1.publicationYear = 2022;
    strcpy(book1.ISBN, "9780131103627");
    book1.price = 44.99;
    
    printf("Book 1 Info\n");
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.publicationYear);
    printf("ISBN: %s\n", book1.ISBN);
    printf("Price: %.2f\n\n", book1.price);
    
    //Book2
    printf("Book 2 Info\n");
    printf("Book Title: ");
    fgets(book2.title, sizeof(book2.title), stdin);
    printf("Author's Name: ");
    fgets(book2.author, sizeof(book2.author), stdin);
    printf("Publication Year: ");
    scanf("%d", &book2.publicationYear);
    printf("ISBN Number: ");
    scanf("%s", book2.ISBN);
    printf("Price: ");
    scanf("%f", &book2.price);
    
    printf("Book Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Publication Year: %d\n", book2.publicationYear);
    printf("ISBN: %s\n", book2.ISBN);
    printf("Price: %.2f", book2.price);
    
    return 0;
}