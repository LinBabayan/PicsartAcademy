#include <stdio.h>

// Task 1 
typedef struct {
    char brand[20];
    char model[20];
    int year;
    float price;
} Car;

void inputCar(Car *car);
void printCar(Car car);
void handleCars1();

// Task 2 
void findCheapestAndNewest(Car cars[], int size);
void handleCars2();

// Task 3 
typedef struct {
    char name[30];
    int age;
    float marks;
} Student;

void inputStudent(Student *s);
void printStudent(Student s);
void findTopper(Student s[], int size);
void handleStudents();

// Task 4 
typedef enum {
    ELECTRONICS,
    FOOD,
    CLOTHING
} Category;

typedef struct {
    char name[20];
    Category category;
    float price;
} Product;

void inputProduct(Product *p);
void printProduct(Product p);
void printFoodProducts(Product p[], int size);
void handleProducts();

// Task 5 
typedef struct {
    char title[50];
    char author[30];
    int year;
} Book;

void inputBook(Book *b);
void printBook(Book b);
void findOldestBook(Book books[], int size);
void handleBooks();

// Task 6 
Car compareCars(Car c1, Car c2);
void handleComparison();

// Task 7
union Value {
    int intValue;
    float floatValue;
};

void demonstrateUnion();

// Task 8 
union Data {
    int i;
    float f;
    char c;
};

void assignInt(union Data *d, int value);
void assignFloat(union Data *d, float value);
void assignChar(union Data *d, char value);

int main() {
    // Task 1 
    handleCars1();

    // Task 2 
    handleCars2();

    // Task 3
    handleStudents();

    // Task 4 
    handleProducts();

    // Task 5 
    handleBooks();

    // Task 6 
    handleComparison();

    // Task 7 
    demonstrateUnion();

    // Task 8 
    union Data d;
    assignInt(&d, 10);
    assignFloat(&d, 5.5);
    assignChar(&d, 'A');

    return 0;
}
