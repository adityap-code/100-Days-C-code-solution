//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main () {
    float p,r,t;
    float si,ci,a;

    printf("ENTER PRINCIPLE : ");
    scanf("%f",&p);

    printf("ENTER RATE OF INTRESET : ");
    scanf("%f",&r);
    
    printf("ENTER TIME IN YEARS : ");
    scanf("%f",&t);
    
    si=(p*r*t)/100;

    printf("VALUE OF SIMPLE INTRESET : %.2f\n",si);

    a=p* pow((1+ r/100),t);
    ci=a-p;

    printf("VALUE OF COMPOUND INTRESET : %.2f\n",ci);
    return 0;
}