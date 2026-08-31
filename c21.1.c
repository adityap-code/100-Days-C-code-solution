// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main () {
    int a , d , ds=0 , l , m , f , p=1 ;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    l=a%10;

    d=a;

    while (d>=10){
        ds++;
        d=d/10;
    }

    f=d;

    for (int i=0 ; i<ds ; i++){
        p=p*10;
    }

    m=(a%p)/10;
    
    a=(l*p)+(m*10)+f;

    printf("AFTER SWAPPING : %d",a);

    return 0;
}