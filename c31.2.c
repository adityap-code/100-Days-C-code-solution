// Reverse an array without taking extra space.


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

    int q;

    for (int i=0 ; i<n/2 ; i++){
        q=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=q;
    }
    printf("\nREVERSED ARRAY : \n");
    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }
    return 0;
}