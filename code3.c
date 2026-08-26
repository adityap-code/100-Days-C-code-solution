#include <stdio.h>

int main() {
    int a,b;
    printf("ENTER VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER VALUE OF B:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("THE VALUE OF A : %d \n",a);
    printf("THE VALUE OF B : %d \n",b);
    return 0;
} 