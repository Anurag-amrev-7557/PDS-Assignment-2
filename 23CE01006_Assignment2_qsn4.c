#include <stdio.h>

int main () {
    //input the year
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    //checking for the leap year
    if (year % 400 == 0) {
        printf("It is a leap year");
    } else if (year % 4 == 0 && year % 100 != 0) {
        printf("It is a leap year");
    } else {
        printf("Not a leap year");
    }

    return 0;
}