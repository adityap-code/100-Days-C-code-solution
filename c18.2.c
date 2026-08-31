<<<<<<< HEAD
//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main () {
    int a,b,i,max=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    printf("ENTER NUMBER : ");
    scanf("%d",&b);

    for (i=1 ; i<=a && i<=b ; i++){
        if (a%i==0 && b%i==0){
            max=i;
        }
    }
    printf("HCF : %d",max);
    return 0;
=======
//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main () {
    int a,b,i,max=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    printf("ENTER NUMBER : ");
    scanf("%d",&b);

    for (i=1 ; i<=a && i<=b ; i++){
        if (a%i==0 && b%i==0){
            max=i;
        }
    }
    printf("HCF : %d",max);
    return 0;
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}