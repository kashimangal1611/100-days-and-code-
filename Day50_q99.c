// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    // dd/mm/yyyy
    scanf("%d/%d/%d", &day, &month, &year);
    
    // dd-Mmm-yyyy
    printf("%02d-%s-%d", day, months[month - 1], year);
    
    return 0;
}


/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/