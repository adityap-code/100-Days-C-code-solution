<<<<<<< HEAD
//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int y;
    printf("ENTER YEAR : ");
    scanf("%d",&y);
    if (y%4==0 && y%100!=0 || y%400==0){
        printf("THE YEAR IS LEAP YEAR : %d",y);
    }
    else{
        printf("THE YEAR IS NOT A LEAP YEAR : %d",y);
    }
    return 0;
=======
//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int y;
    printf("ENTER YEAR : ");
    scanf("%d",&y);
    if (y%4==0 && y%100!=0 || y%400==0){
        printf("THE YEAR IS LEAP YEAR : %d",y);
    }
    else{
        printf("THE YEAR IS NOT A LEAP YEAR : %d",y);
    }
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
}