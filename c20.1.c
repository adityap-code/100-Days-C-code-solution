<<<<<<< HEAD
// Write a program to find the product of odd digits of a number.

#include<stdio.h>

int main () {
    int a,d,s=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    while (a>0){
        d=a%10;
        a=a/10;
        printf("DIGITS : %d\n",d);
        if (d%2!=0){
            s=s*d;
        }
    }
    printf("PRODUCT OF ODD DIGIT IS : %d",s);
    
    return 0;
=======
// Write a program to find the product of odd digits of a number.

#include<stdio.h>

int main () {
    int a,d,s=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);

    while (a>0){
        d=a%10;
        a=a/10;
        printf("DIGITS : %d\n",d);
        if (d%2!=0){
            s=s*d;
        }
    }
    printf("PRODUCT OF ODD DIGIT IS : %d",s);
    
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
}