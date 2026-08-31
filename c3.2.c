//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main () {
    int a,b,c;
    printf("ENTER A : ");
    scanf("%d",&a);
    printf("ENTER B : ");
    scanf("%d",&b);
    
    c=b;
    b=a;
    a=c;
    printf("VALUE OF A IS : %d\n",a);
    printf("VALUE OF B IS : %d",b);
    
    return 0;
}