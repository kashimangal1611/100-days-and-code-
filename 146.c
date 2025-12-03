#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50

// Define the nested structure first
struct Date {
    int day;
    int month;
    int year;
};

// Define the main structure using the nested structure
struct Employee {
    char name[NAME_LENGTH];
    int id;
    float salary;
    struct Date joining_date; // Member of type struct Date
};

// Function to print employee details, including the nested date
void printEmployeeDetails(struct Employee emp) {
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: $%.2f\n", emp.salary);
    // Access nested members using multiple dot operators
    printf("Joining Date: %d/%d/%d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
}

int main() {
    struct Employee emp1;

    // Assign values to the main struct members
    strcpy(emp1.name, "John Doe");
    emp1.id = 1234;
    emp1.salary = 65000.50;

    // Assign values to the nested struct members
    emp1.joining_date.day = 15;
    emp1.joining_date.month = 7;
    emp1.joining_date.year = 2023;

    // Call the print function
    printEmployeeDetails(emp1);

    return 0;
}
