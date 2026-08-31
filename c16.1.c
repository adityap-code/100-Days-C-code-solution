<<<<<<< HEAD
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
=======
<<<<<<< HEAD
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
=======
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
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}