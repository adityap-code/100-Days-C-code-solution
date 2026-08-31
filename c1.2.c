//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main () {
    int a,b;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    printf("ENTER NUMBER : ");
    scanf("%d",&b);
    
    printf("SUM : %d",(a+b));

    printf("DIFFRENCE : %d",(a-b));

    printf("PRODUCT : %d",(a*b));

    printf("QUOTIENT : %d",(a/b));

    return 0;
}