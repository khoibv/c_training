// Get month name from number (1–12)
// Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.

#include <stdio.h>
int main() {
    int monthnumber;
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &monthnumber);

    switch(monthnumber) {
        case 1 : printf("january\n"); break;
        case 2 : printf("february\n"); break;
        case 3 : printf("march\n"); break;
        case 4 : printf("april\n"); break;
        case 5 : printf("may\n"); break;
        case 6 : printf("june\n"); break;
        case 7 : printf("july\n"); break;
        case 8 : printf("august\n"); break;
        case 9 : printf("september\n"); break;
        case 10 : printf("october\n"); break;
        case 11 : printf("november\n"); break;
        case 12 : printf("december\n"); break;
       
    }
    
    return 0;
}
