//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main () {
    int a,i,s=0;
    printf("ENTER NUMBERS : ");
    scanf("%d",&a);
    for (i=1 ; i<=a ; i++){
        if (i%2!=0){
            s=s+i;
        }
    }
    printf("SUM OF ODD NUMBER IS : %d",s);
    return 0;
}