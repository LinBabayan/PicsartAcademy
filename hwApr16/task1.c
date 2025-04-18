#include <stdio.h>

typedef struct {
    char brand[20];
    char model[20];
    int year;
    float price;
} Car;

void inputCar(Car *car) {
    printf("Enter brand: ");
    scanf("%s", car->brand);
    printf("Enter model: ");
    scanf("%s", car->model);
    printf("Enter year: ");
    scanf("%d", &car->year);
    printf("Enter price: ");
    scanf("%f", &car->price);
}

void printCar(Car car) {
    printf("Brand: %s\n", car.brand);
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);
    printf("-----------------------\n");
}

void handleCars() {
    Car cars[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for car %d:\n", i + 1);
        inputCar(&cars[i]);
    }

    printf("\nCar Details:\n");
    for (int i = 0; i < 3; i++) {
        printCar(cars[i]);
    }
}

int main() {
    handleCars();
    return 0;
}

