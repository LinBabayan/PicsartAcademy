#include <stdio.h>


void inputBook(Book *b) {
    printf("Enter book title: ");
    scanf(" %[^\n]", b->title);  
    printf("Enter author: ");
    scanf(" %[^\n]", b->author); 
    printf("Enter year: ");
    scanf("%d", &b->year);
}

void printBook(Book b) {
    printf("Title: %s\nAuthor: %s\nYear: %d\n", b.title, b.author, b.year);
}

void findOldestBook(Book books[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (books[i].year < books[minIndex].year) {
            minIndex = i;
        }
    }

    printf("\nOldest Book:\n");
    printBook(books[minIndex]);
}

void handleBooks() {
    Book books[4];
    for (int i = 0; i < 4; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        inputBook(&books[i]);
    }
    findOldestBook(books, 4);
}

