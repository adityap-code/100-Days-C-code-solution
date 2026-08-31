//Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main () {
    int a;
    printf("ENTER A NUMBER : ");
    scanf("%d",&a);
    if (a%2==0){
        printf("THE NUMBER YOU ENTERED IS EVEN ");
    }
    else {
        printf("THE NUMBER YOU ENTERED IS ODD ");
    }
    return 0;
}