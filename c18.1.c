<<<<<<< HEAD
// Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int a,i;
    printf("ENTER NUMBER ");
    scanf("%d",&a);

    for (i=1 ; i<=a ; i++){
        if (a%i==0){
            printf("FACTORS : %d \n",i);
        }
        else {
            printf("NO FACTORS\n");
        }
    }
    return 0;
=======
// Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int a,i;
    printf("ENTER NUMBER ");
    scanf("%d",&a);

    for (i=1 ; i<=a ; i++){
        if (a%i==0){
            printf("FACTORS : %d \n",i);
        }
        else {
            printf("NO FACTORS\n");
        }
    }
    return 0;
>>>>>>> 68ae41e7e6ce41e2137cb5a5ef03f36a742644d1
}