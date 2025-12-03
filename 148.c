#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50

struct Employee {
    char name[NAME_LENGTH];
    int id;
    float salary;
};

int areStructsEqual(struct Employee emp1, struct Employee emp2) {
    if (emp1.id != emp2.id) {
        return 0;
    }
    if (emp1.salary != emp2.salary) {
        return 0;
    }
    if (strcmp(emp1.name, emp2.name) != 0) {
        return 0;
    }
    return 1;
}

int main() {
    struct Employee emp1;
    struct Employee emp2;
    struct Employee emp3;

    strcpy(emp1.name, "John Doe");
    emp1.id = 101;
    emp1.salary = 50000.0;

    // Create a second struct with identical values
    strcpy(emp2.name, "John Doe");
    emp2.id = 101;
    emp2.salary = 50000.0;

    // Create a third struct with different values
    strcpy(emp3.name, "Jane Doe");
    emp3.id = 102;
    emp3.salary = 60000.0;

    if (areStructsEqual(emp1, emp2)) {
        printf("emp1 and emp2 are identical.\n");
    } else {
        printf("emp1 and emp2 are different.\n");
    }

    if (areStructsEqual(emp1, emp3)) {
        printf("emp1 and emp3 are identical.\n");
    } else {
        printf("emp1 and emp3 are different.\n");
    }

    return 0;
}
