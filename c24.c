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
}