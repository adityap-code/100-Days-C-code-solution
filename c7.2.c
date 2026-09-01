// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char x;
    printf("ENTER CHARATER : ");
    scanf("%c",&x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("THE CHARATER YOU ENTERED IS VOWEL ");
    }
    else {
        printf("THE CHARATER YOU ENTERED IS CONSTANT");
    }
    return 0;
}