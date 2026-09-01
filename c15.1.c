// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main () {
    int a,i,s=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    if (a<0){
        printf("FACTORIAL IS NOT DEFINED FOR NEGATIVE NUMBER ");
    }
    else {
        for (i=1 ; i<=a ; i++){
            s=s*i;
    }
    printf("FACTORILA IS : %d",s);
}
    return 0;
}