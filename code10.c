#include <stdio.h>

int main () {
    int a;
    int i;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    for (i=2; a%i<=9; i++){
        printf("%d",a);
    }
    return 0;
}