<<<<<<< HEAD
//Write a program to reverse a given number.

#include <stdio.h>

int main () {
    int a , d , r=0 ;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    while (a>0){
        d=a%10;
        r=r*10+d;
        a=a/10;
        
    }
    printf("REVERSED NUMBER IS : %d",r);
    return 0;
=======
<<<<<<< HEAD
//Write a program to reverse a given number.

#include <stdio.h>

int main () {
    int a , d , r=0 ;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    while (a>0){
        d=a%10;
        r=r*10+d;
        a=a/10;
        
    }
    printf("REVERSED NUMBER IS : %d",r);
    return 0;
=======
//Write a program to reverse a given number.

#include <stdio.h>

int main () {
    int a , d , r=0 ;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    while (a>0){
        d=a%10;
        r=r*10+d;
        a=a/10;
        
    }
    printf("REVERSED NUMBER IS : %d",r);
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}