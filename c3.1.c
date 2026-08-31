//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int c;
    printf("ENTER THE CELCIUS VALUE : ");
    scanf("%d",&c);
    printf("VALUE IN FARENHITE WILL BE : %d",((c*9/5)+32));
    return 0;
}