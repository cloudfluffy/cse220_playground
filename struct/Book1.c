#include <stdio.h>

typedef struct Book {
    float price;
    int stock;
    char *title;
    char **authors;
} Book;

int main(void) {
    Book myBook;
    myBook.price = 1.2;
    printf("%f\n", myBook.price);

    Book *book_ptr = &myBook;
    book_ptr->price = 1.3;
    printf("%f\n", myBook.price);
    printf("%f\n", book_ptr->price);
    return 0;
}