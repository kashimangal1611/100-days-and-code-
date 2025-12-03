#include <stdio.h>
#include <string.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name;
    int age;
    Gender gender;
} Person;

void printGender(Gender g) {
    switch (g) {
        case MALE:
            printf("Male");
            break;
        case FEMALE:
            printf("Female");
            break;
        case OTHER:
            printf("Other");
            break;
        default:
            printf("Unknown");
            break;
    }
}

int main() {
    Person person1;

    strcpy(person1.name, "Bob");
    person1.age = 30;
    person1.gender = MALE;

    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);
    printf("Person Gender: ");
    printGender(person1.gender);
    printf("\n");

    return 0;
}
