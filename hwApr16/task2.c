#include <stdio.h>


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
    printf("%s %s (%d) - $%.2f\n", car.brand, car.model, car.year, car.price);
}

void findCheapestAndNewest(Car cars[], int size) {
    int minIndex = 0;
    int newIndex = 0;

    for (int i = 1; i < size; i++) {
        if (cars[i].price < cars[minIndex].price) {
            minIndex = i;
        }
        if (cars[i].year > cars[newIndex].year) {
            newestIndex = i;
        }
    }

    printf("\nCheapest Car: ");
    printCar(cars[minIndex]);

    printf("Newest Car: ");
    printCar(cars[newIndex]);
}

void handleCars2() {
    Car cars[3];
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for car %d:\n", i + 1);
        inputCar(&cars[i]);
    }

    printf("\nAll Car Details:\n");
    for (int i = 0; i < 3; i++) {
        printCar(cars[i]);
    }

    findCheapestAndNewest(cars, 3);
}

