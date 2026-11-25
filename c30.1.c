// Count even and odd numbers in an array.

#include <stdio.h>

int main () {
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n];

    printf("ENTER THE NUMBER : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }

    int even = 0;
    int odd = 0;

    for (int i=0 ; i<n ; i++){
        if (a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nEVEN : %d",even);
    printf("\nODD : %d",odd);
    return 0;
}