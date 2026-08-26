#include <stdio.h>

int main () {
    int a,b,c;
    printf("ENTER VALUE OF A : ");
    scanf("%d",&a);
    
    printf("ENTER VALUE OF B : ");
    scanf("%d",&b);

    c=b;
    b=a;
    a=c;
    printf("VALUE OF A IS : %d \n",a);
    printf("VALUE OF B IS : %d \n",b);

    return 0;
}