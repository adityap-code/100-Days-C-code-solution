#include <stdio.h>

int main () {
    int a;
    printf("ENTER A NUMBER : ");
    scanf("%d",&a);
    if (a%2==0){
        printf("THE NUMBER IS EVEN \n");
    }
    else{
        printf("THE NUMBER IS ODD \n");
    }
    return 0;
}