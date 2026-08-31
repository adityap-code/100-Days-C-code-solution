// Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main () {
    int a,b,c;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    printf("ENTER NUMBER : ");
    scanf("%d",&b);
    printf("ENTER NUMBER : ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("THE LARGEST NUMBER IS : %d",a);
    }
    else if (b>a && b>c){
        printf("THE LARGEST NUMBER IS : %d",b);
    }
    else {
        printf("THE LARGEST NUMBER IS : %d",c);
    }
    return 0;
}