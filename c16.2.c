<<<<<<< HEAD
//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main () {
    int a , d , r=0 , o;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    o=a;
    while (a>0){
        d=a%10;
        r=r*10+d;
        a=a/10;
    }
    printf("REVERSED NUMBER : %d\n",r);
    if (r == o){
        printf("PALINDROME NUMBER");
    }
    else {
        printf("NOT A PALINDROME NUMBER");
    }
    return 0;
=======
//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main () {
    int a , d , r=0 , o;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    o=a;
    while (a>0){
        d=a%10;
        r=r*10+d;
        a=a/10;
    }
    printf("REVERSED NUMBER : %d\n",r);
    if (r == o){
        printf("PALINDROME NUMBER");
    }
    else {
        printf("NOT A PALINDROME NUMBER");
    }
    return 0;
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}