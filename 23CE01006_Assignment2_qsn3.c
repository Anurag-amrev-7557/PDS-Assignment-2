#include <stdio.h>

int main() {
    int totalDays = 890; // Total number of days

    //Converts days to years, months, weeks and days
    int years = totalDays / 365; // Calculate years
    int months = (totalDays % 365) / 30; // Calculate months
    int weeks = ((totalDays % 365) % 30) / 7; // Calculate weeks
    int days = totalDays - ((years*365) + (months*30) + (weeks*7)); // Calculate days

    //Print the results
    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d", days);

    return 0;
}