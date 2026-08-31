<<<<<<< HEAD
// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int a, i, prime = 1;

    printf("ENTER NUMBER : ");
    scanf("%d", &a);

    if (a <= 1) {
        prime = 0;
    }
    
    else {
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1) {
        printf("PRIME NUMBER");
    }
    
    else {
        printf("NOT A PRIME NUMBER");
    }

    return 0;
=======
<<<<<<< HEAD
// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int a, i, prime = 1;

    printf("ENTER NUMBER : ");
    scanf("%d", &a);

    if (a <= 1) {
        prime = 0;
    }
    
    else {
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1) {
        printf("PRIME NUMBER");
    }
    
    else {
        printf("NOT A PRIME NUMBER");
    }

    return 0;
=======
// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int a, i, prime = 1;

    printf("ENTER NUMBER : ");
    scanf("%d", &a);

    if (a <= 1) {
        prime = 0;
    }
    
    else {
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1) {
        printf("PRIME NUMBER");
    }
    
    else {
        printf("NOT A PRIME NUMBER");
    }

    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}