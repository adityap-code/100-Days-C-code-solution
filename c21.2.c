// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main () {
    int a , s=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    for (int i=1 ; i<a ; i++){
        if (a%i==0){
            s=s+i;
        }
    }
    if (s==a){
        printf("%d IS A PERFECT NUMBER ",a);
    }
    else {
        printf("%d IS NOT A PERFECT NUMBER ",a);
    }
    return 0;
}