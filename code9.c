#include <stdio.h>

int main () {
    int a ;
    printf ("ENTER NUMBER : ");
    scanf("%d",&a);
    if (a<0){
        printf("THE NUMBER IS NEGATIVE ");
    }
    if (a>0){
        printf("THE NUMBER IS POSITIVE ");
    }
    else {
        printf("THE NUMBER IS ZERO ");
    }
    return 0;
}