<<<<<<< HEAD
//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include<math.h>

int main () {
    int a , o , d , ds=0;
    int sum=0;
    printf("ENTER NUMBER : ");  
    scanf("%d",&a);
    
    o=a;

    while (a>0){
        ds++;
        a=a/10;
    }

    a=o;

    while (a>0){
        d=a%10;
        sum=sum + pow(d,ds) ;
        a=a/10;
        printf("Digit = %d, Power = %d\n", d, (int)pow(d, ds));
    }
    
    if (sum == o){
        printf("ARMSTRONG NUMBER ");
    }
    else {
        printf("NOT A ARMSTRONG NUMBER ");
    }
    return 0;
=======
<<<<<<< HEAD
//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include<math.h>

int main () {
    int a , o , d , ds=0;
    int sum=0;
    printf("ENTER NUMBER : ");  
    scanf("%d",&a);
    
    o=a;

    while (a>0){
        ds++;
        a=a/10;
    }

    a=o;

    while (a>0){
        d=a%10;
        sum=sum + pow(d,ds) ;
        a=a/10;
        printf("Digit = %d, Power = %d\n", d, (int)pow(d, ds));
    }
    
    if (sum == o){
        printf("ARMSTRONG NUMBER ");
    }
    else {
        printf("NOT A ARMSTRONG NUMBER ");
    }
    return 0;
=======
//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include<math.h>

int main () {
    int a , o , d , ds=0;
    int sum=0;
    printf("ENTER NUMBER : ");  
    scanf("%d",&a);
    
    o=a;

    while (a>0){
        ds++;
        a=a/10;
    }

    a=o;

    while (a>0){
        d=a%10;
        sum=sum + pow(d,ds) ;
        a=a/10;
        printf("Digit = %d, Power = %d\n", d, (int)pow(d, ds));
    }
    
    if (sum == o){
        printf("ARMSTRONG NUMBER ");
    }
    else {
        printf("NOT A ARMSTRONG NUMBER ");
    }
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}