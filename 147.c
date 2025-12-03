#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50
#define NUM_EMPLOYEES 3

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[NAME_LENGTH];
    int id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee employees[NUM_EMPLOYEES] = {
        {"Alice", 101, 60000.0, {1, 1, 2020}},
        {"Bob", 102, 75000.5, {10, 5, 2021}},
        {"Charlie", 103, 82000.7, {22, 11, 2022}}
    };

    FILE *file_ptr;
    const char *filename = "employees.bin";

    // --- Writing Data to a Binary File ---
    file_ptr = fopen(filename, "wb"); // Open file in write-binary mode
    if (file_ptr == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write the entire array of structures to the file in one go
    fwrite(employees, sizeof(struct Employee), NUM_EMPLOYEES, file_ptr);

    fclose(file_ptr);
    printf("Successfully wrote %d employee records to %s\n", NUM_EMPLOYEES, filename);

    // --- Reading Data from the Binary File ---
    struct Employee read_employees[NUM_EMPLOYEES];

    file_ptr = fopen(filename, "rb"); // Open file in read-binary mode
    if (file_ptr == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Read all records back into a new array of structures
    fread(read_employees, sizeof(struct Employee), NUM_EMPLOYEES, file_ptr);

    fclose(file_ptr);
    printf("\nSuccessfully read %d employee records from %s\n", NUM_EMPLOYEES, filename);

    // --- Print Read Data ---
    printf("\n--- Stored Employee Data ---\n");
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Employee %d:\n", i + 1);
        printf("  Name: %s\n", read_employees[i].name);
        printf("  ID: %d\n", read_employees[i].id);
        printf("  Salary: $%.2f\n", read_employees[i].salary);
        printf("  Joining Date: %d/%d/%d\n", read_employees[i].joining_date.day,
                                              read_employees[i].joining_date.month,
                                              read_employees[i].joining_date.year);
        printf("\n");
    }

    return 0;
}
