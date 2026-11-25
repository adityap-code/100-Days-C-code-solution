//Write a program to print all the prime numbers from 1 to n

#include <stdio.h>

int main () {
    int n;
    int prime = 1;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);


    for (int i=1 ; i<=n ; i++){
        for (int a=2 ; a<i ; a++){
            if (i%a==0){
                prime=0 ;
                break;
            }
        }
    }

    if (prime == 1){
        printf("NUMERS ARE : %d",n);
    }
    else {
        printf("NOT A PRIME NUMBER ");
    }
    return 0;
}