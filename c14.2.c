<<<<<<< HEAD
//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main () {
    int a,i,s=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    for (i=2 ; i<=a ; i++){
        if (i%2==0){
            printf("NUMBER : %d\n",i);
            s=s*i;
        }
    }
    printf("PRODUCT OF EVEN NUMBERS : %d",s);
    return 0;
=======
<<<<<<< HEAD
//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main () {
    int a,i,s=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    for (i=2 ; i<=a ; i++){
        if (i%2==0){
            printf("NUMBER : %d\n",i);
            s=s*i;
        }
    }
    printf("PRODUCT OF EVEN NUMBERS : %d",s);
    return 0;
=======
//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main () {
    int a,i,s=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    for (i=2 ; i<=a ; i++){
        if (i%2==0){
            printf("NUMBER : %d\n",i);
            s=s*i;
        }
    }
    printf("PRODUCT OF EVEN NUMBERS : %d",s);
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}