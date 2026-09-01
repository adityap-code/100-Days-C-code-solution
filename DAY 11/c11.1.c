// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main () {
    int month ;
    printf("Enter a number (1-12): ");
    scanf("%d", &month);

    switch (month){
        case 1:
        printf("JANUARY , 31 DAYS");
        break;

        case 2:
        printf("FEBURARY , 28or29 DAYS");
        break;

        case 3:
        printf("MARCH , 30 DAYS");
        break;

        case 4:
        printf("APRIL , 30 DAYS");
        break;

        case 5:
        printf("MAY , 30 DAYS");
        break;

        case 6:
        printf("JUNE , 31 DAYS");
        break;

        case 7:
        printf("JULY , 30 DAYS");
        break;

        case 8:
        printf("AGUSUT , 31 DAYS");
        break;

        case 9:
        printf("SEPTEMBER , 30 DAYS");
        break;

        case 10:
        printf("OCTOBER , 31 DAYS");
        break;

        case 11:
        printf("NOVEMBER , 30 DAYS");
        break;

        case 12:
        printf("DECEMBER , 31 DAYS");
        break;
    }
    return 0;
}