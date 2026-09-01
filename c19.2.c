//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main () {
    int a,i,s=0,d;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    
    i=a; 

    while (a>0){
        a=a/10;
    } 

    a=i;

    while (a>0){
        d=a%10;
        s=s+d;
        a=a/10;
        printf("DIGITS : %d\n",d);
    }

    printf("SUM OF THE DIGITS IS : %d",s);

    return 0;
}