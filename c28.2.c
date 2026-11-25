//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main () {
    int n;
    printf("ENTER NUMBER YOU WANT TO PRINT : ");
    scanf("%d",&n);
    int a[n];
    int i;

    for (i=0 ; i<n ; i++){
        printf("ENTER NUMBER : ");
        scanf("%d",&a[i]);
        
    }
    for (i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }

    return 0;
}   