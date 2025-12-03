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

    int highest_marks_index = 0;
    float max_marks = students[0].marks;

    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            highest_marks_index = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[highest_marks_index].name);
    printf("Roll Number: %d\n", students[highest_marks_index].roll_no);
    printf("Marks: %.2f\n", students[highest_marks_index].marks);

    return 0;
}
