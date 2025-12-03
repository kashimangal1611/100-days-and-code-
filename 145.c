#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50
#define NUM_STUDENTS 5

struct Student {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int size) {
    int top_index = 0;
    float max_marks = students[0].marks;

    for (int i = 1; i < size; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            top_index = i;
        }
    }

    // Return the entire structure by value
    return students[top_index];
}

void printStudentDetails(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student students[NUM_STUDENTS] = {
        {"Alice", 101, 88.5},
        {"Bob", 102, 75.0},
        {"Charlie", 103, 92.1},
        {"David", 104, 60.5},
        {"Eve", 105, 89.9}
    };

    // Call the function which returns a struct, and store the result
    struct Student top_performer = findTopStudent(students, NUM_STUDENTS);

    printf("\n--- Top Student Details ---\n");
    // Pass the returned struct to the print function
    printStudentDetails(top_performer);

    return 0;
}
