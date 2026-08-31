// Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main () {
    int a,b;
    printf("ENTER A : ");
    scanf("%d",&a);
    printf("ENTER B : ");
    scanf("%d",&b);
    
    b=a+b;
    a=b-a;
    b=b-a;

    printf("VALUE OF A IS : %d\n",a);
    printf("VALUE OF B IS : %d",b);
    
    return 0;
}