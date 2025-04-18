#include <stdio.h>

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


void inputProduct(Product *p) {
    int catChoice;
    printf("Enter product name: ");
    scanf("%s", p->name);
    
    printf("Select category (0 - ELECTRONICS, 1 - FOOD, 2 - CLOTHING): ");
    scanf("%d", &catChoice);
    p->category = (Category)catChoice;

    printf("Enter price: ");
    scanf("%f", &p->price);
}

void printProduct(Product p) {
    char *categoryNames[] = {"ELECTRONICS", "FOOD", "CLOTHING"};
    printf("Name: %s, Category: %s, Price: $%.2f\n", p.name, categoryNames[p.category], p.price);
}


void printFoodProducts(Product p[], int size) {
    printf("\nProducts in FOOD category:\n");
    for (int i = 0; i < size; i++) {
        if (p[i].category == FOOD) {
            printProduct(p[i]);
        }
    }
}


void handleProducts() {
    Product p[3];
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        inputProduct(&p[i]);
    }
    printFoodProducts(p, 3);
}



