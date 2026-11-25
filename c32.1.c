// Merge two arrays.

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

    int m;
    printf("\nENTER THE SIZE OF ARRAY : ");
    scanf("%d",&m);
    int b[m];

    printf("ENTER THE NUMBER : ");
    for (int i=0 ; i<m ; i++){
        scanf("%d",&b[i]);
    }

    for (int j=0 ; j<m ; j++){
        printf("%d  ",b[j]);
    }

    int c[n+m];
    for (int i=0 ; i<n ; i++){
        c[i] = a[i];
    }    
    
    for(int i=0 ; i<m ; i++){
        c[n+i] = b[i];
    }
    
    printf("\nMERGED ARRAY : \n");
    for (int i=0 ; i<n+m ; i++){
        printf("%d  ",c[i]);
    }
    
    return 0;
}