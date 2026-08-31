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
}