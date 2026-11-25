// Find the sum of array elements.

#include <stdio.h>

int main () {
    int n;
    printf("ENTER THE NUMBER OF ARRAY YOU WANT TO PRINT : ");
    scanf("%d",&n);
    int a[n];
    int s=0;

    for (int i=0 ; i<n ; i++){
        printf("ENTER THE NUMBER : ");
        scanf("%d",&a[i]);
    }

    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }

    for (int i=0 ; i<n ; i++){
        s=s+a[i];
    }
    printf("\nSUM IS : %d",s);
    return 0;
}