#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
};

void printStudentDetails(struct Student s) {
    printf("--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student1;

    // Manually assign values for demonstration
    strcpy(student1.name, "Alice Smith");
    student1.roll_no = 101;
    student1.marks = 88.5;

    // Call the function, passing the entire structure by value
    printStudentDetails(student1);

    return 0;
}
