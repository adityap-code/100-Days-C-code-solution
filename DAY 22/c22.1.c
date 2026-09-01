// Write a program to check if a number is a strong number.

#include <stdio.h>

int main () {
    int a , o , d , s=0 , f=1 , n=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    
    o=a;

    while (a>0){
        d=a%10;
        s=s+d;
        a=a/10; 
        printf("DIGITS : %d\n",d);
        for (int i=1 ; i<=d ; i++){
            f=f*i;
        }
        n=n+f;
}

    if (n==o){
        printf("STRONG NUMBER : %d",o);
    }
    else {
        printf("NOT A STRONG NUMBER : %d",o);
    }

    return 0;
}