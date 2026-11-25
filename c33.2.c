//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main () {
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n];

    printf("ENTER THE NUMBERS : ");
    for (int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }

    int q;
    printf("\nENTER THE NUMBER : ");
    scanf("%d",&q);

    int pos;
    pos=n;

    for (int i=0 ; i<n ; i++){
        if (q<a[i]){
            pos=i;
            break;
        }
    }

    for (int i=n ; i>pos ; i--){
        a[i]=a[i-1];
    }

    a[pos]=q;
    n++;

    printf("ARRAY AFTER INSERTING NUMBER : \n ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}