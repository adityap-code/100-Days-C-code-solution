// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int a;
    printf("ENTER A NUMBER : ");
    scanf("%d",&a);
    if (a>=0){
        if (a==0)
        printf("THE NUMBER YOU ENTERED IS ZERO");
        else
        printf("THE NUMBER YOU ENTERED IS POSITIVE");
    }
    else{
        printf("THE NUMBER YOU ENTERED IS NEGATIVE");
    }
    return 0;
}
