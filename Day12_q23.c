// Write a program to calculate a library fine based on late days.

#include <stdio.h>
int main() {
    int late_days;
    int fine;
    // Input number of late days from the user
    printf("Enter the number of late days: ");
    scanf("%d", &late_days);
    
    // Calculate fine based on the number of late days
    if (late_days <= 5) {
        fine = late_days * 2; // ₹2 per day for first 5 days
        printf("Fine ₹ %d\n", fine);
    } else if (late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4); // ₹4 per day for next 5 days
        printf("Fine ₹ %d\n", fine);
    } else if (late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6); // ₹6 per day for next 20 days
        printf("Fine ₹ %d\n", fine);
    } else {
        printf("Membership Cancelled\n"); // More than 30 days
    }
    
    return 0;
}