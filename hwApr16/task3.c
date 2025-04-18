#include <stdio.h>

typedef struct {
    char name[30];
    int age;
    float marks;
} Student;

void inputStudent(Student *s) {
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter age: ");
    scanf("%d", &s->age);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void printStudent(Student s) {
    printf("Name: %s, Age: %d, Marks: %.2f\n", s.name, s.age, s.marks);
}

void findTopper(Student s[], int size) {
    int top = 0;
    for (int i = 1; i < size; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    printf("\nTopper:\n");
    printStudent(s[top]);
}

void handleStudents() {
    Student s[5];
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudent(&s[i]);
    }

    findTopper(s, 5);
}

int main() {
    handleStudents();
    return 0;
}

