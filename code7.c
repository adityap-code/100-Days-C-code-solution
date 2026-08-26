#include <stdio.h>

int main () {
    int a,b,max=1;
    printf ("ENTER THE NUMBERS : ");
    scanf("%d",&a);
    printf ("ENTER THE NUMBERS : ");
    scanf("%d",&b);
    for (int i=1; i<=a && i<=b; i++){
        if (a%i==0 && b%i==0){
            max=i;
        }
    }
    printf("\nMAX : %d",max);
    printf("\nLMC : %d",((a*b)/max));  
    return 0;
}