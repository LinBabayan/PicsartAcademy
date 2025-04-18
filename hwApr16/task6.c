#include <stdio.h>



void inputCar(Car *c) {
    printf("Enter brand: ");
    scanf(" %[^\n]", c->brand);
    printf("Enter model: ");
    scanf(" %[^\n]", c->model);
    printf("Enter price: ");
    scanf("%f", &c->price);
}

void printCar(Car c) {
    printf("%s %s - $%.2f\n", c.brand, c.model, c.price);
}

Car compareCars(Car c1, Car c2) {
    if (c1.price > c2.price) {
        return c1;
    } else {
        return c2;
    }
}

void handleComparison() {
    Car car1, car2;
    printf("Enter details for Car 1:\n");
    inputCar(&car1);
    printf("Enter details for Car 2:\n");
    inputCar(&car2);

    Car expensive = compareCars(car1, car2);

    printf("\nThe more expensive car is: ");
    printCar(expensive);
}


