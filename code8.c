#include <stdio.h>

int main() {
    int a,b,max=1;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    printf("ENTER NUMBER : ");
    scanf("%d",&b);
    for (int i=1; i<=a && i<=b; i++){
        if (a%i==0 && b%i==0){
            max=i;
        }
    }
    printf("THE GCD IS : %d",max);
    return 0;
}