// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
// Print the ID and salary (with two decimal places) of the employee for a particular month.

#include <stdio.h>

int main() {
    char id[20];
    
    int hour;
    
    double value, salary;
    

    printf("Input the employee's ID (Max. 20 chars): ");
    
    scanf("%20s", id); 
    
    printf("\nInput the working hours: ");
    
    scanf("%d", &hour);
    
    printf("\nSalary amount/hr: ");
    
    scanf("%lf", &value);

    salary = value * hour;

    printf("\nEmployee's ID = %s\nSalary = U$ %.2lf\n", id, salary);

    return 0;
}