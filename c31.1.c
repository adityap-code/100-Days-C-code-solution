// Search for an element in an array using linear search.

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
    printf("\nENTER THE NUMBER WANT TO FIND : ");
    scanf("%d",&q);

    for (int i=0 ; i<n ; i++){
        if (a[i]==q){
            printf("\nFOUND AT INDEX %d",i);
        }
        
    }
    return 0;
}