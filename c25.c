//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main () {
    int a, d, q=0 , p=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    while (a>0) {
        d=a%2;
        q=q+(d*p);
        p=p*10;
        a=a/2;
    }
    printf("BINARY NUMBER IS : %d",q);
    return 0;
}