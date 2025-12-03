#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 50

struct Employee {
    char name[NAME_LENGTH];
    int id;
    float salary;
};

void printEmployeeDetails(struct Employee *emp_ptr) {
    if (emp_ptr == NULL) {
        printf("Error: Null pointer provided.\n");
        return;
    }
    printf("\n--- Employee Details ---\n");
    // Access members using the arrow operator (->)
    printf("Name: %s\n", emp_ptr->name);
    printf("ID: %d\n", emp_ptr->id);
    printf("Salary: $%.2f\n", emp_ptr->salary);
}

int main() {
    struct Employee *emp_ptr;

    // Dynamically allocate memory for one struct Employee
    emp_ptr = (struct Employee *)malloc(sizeof(struct Employee));

    if (emp_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values to members using the arrow operator (->)
    strcpy(emp_ptr->name, "Mike Ross");
    emp_ptr->id = 5678;
    emp_ptr->salary = 95000.75;

    // Pass the pointer to the function
    printEmployeeDetails(emp_ptr);

    // Free the dynamically allocated memory
    free(emp_ptr);
    emp_ptr = NULL; // Good practice to set pointer to NULL after freeing

    return 0;
}

