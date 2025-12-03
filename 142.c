#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50
#define NUM_STUDENTS 5

struct Student {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);

        // Clear the input buffer before reading the name
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Enter name: ");
        if (fgets(students[i].name, NAME_LENGTH, stdin) == NULL) {
            return 1;
        }
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("\n--- Stored Student Data ---\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll Number: %d\n", students[i].roll_no);
        printf("  Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
