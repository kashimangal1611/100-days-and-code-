#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
};

int main() {
    struct Student student1;

    printf("Enter student name: ");
    if (fgets(student1.name, NAME_LENGTH, stdin) == NULL) {
        return 1;
    }
    student1.name[strcspn(student1.name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &student1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    printf("\n--- Student Data ---\n");

    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_no);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
