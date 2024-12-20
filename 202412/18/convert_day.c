// Write a C program to convert specified days into years, weeks and days.

// Pictorial Presentation:

// C Programming: Convert specified days into years, weeks and days 
// Note: Ignore leap year.
// Test Data :
// Number of days : 1329

#include <stdio.h>

int main()
{
    int days, years, weeks;

    days = 1329;
    
    years = days/365; 
    
    weeks = (days % 365)/7;
    
    days = days - ((years*365) + (weeks*7)); 

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days : %d \n", days);

    return 0;
}