#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_LENGTH 50

struct Employee {
    char name[NAME_LENGTH];
    int id;
    float salary;
};

void modifyEmployee(struct Employee *emp_ptr, int new_id, float new_salary) {
    if (emp_ptr == NULL) {
        printf("Error: Null pointer provided.\n");
        return;
    }
    // Modify members using the arrow operator (->)
    emp_ptr->id = new_id;
    emp_ptr->salary = new_salary;
}

void displayEmployee(const struct Employee *emp_ptr) {
    if (emp_ptr == NULL) {
        printf("Error: Null pointer provided.\n");
        return;
    }
    printf("\n--- Employee Details ---\n");
    // Display members using the arrow operator (->)
    printf("Name: %s\n", emp_ptr->name);
    printf("ID: %d\n", emp_ptr->id);
    printf("Salary: $%.2f\n", emp_ptr->salary);
}

int main() {
    struct Employee emp1;
    struct Employee *emp_ptr;

    // Initialize the struct using dot operator
    strcpy(emp1.name, "Sarah Connor");
    emp1.id = 999;
    emp1.salary = 40000.0;

    // Assign the address of the struct to the pointer
    emp_ptr = &emp1;

    printf("Before modification:\n");
    // Pass the pointer to the display function
    displayEmployee(emp_ptr);

    // Modify the data through the pointer using the modify function
    modifyEmployee(emp_ptr, 123, 75000.50);

    printf("\nAfter modification:\n");
    // Display the updated data through the pointer
    displayEmployee(emp_ptr);

    return 0;
}
