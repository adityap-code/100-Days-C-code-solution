//Delete an element from an array.

#include <stdio.h>

int main () {
    int n ; 
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n]; 

    printf("ENTER ELEMENTS OF ARRAY : ");
    for (int i=0 ; i<n ; i++){
        scanf ("%d",&a[i]);
    }

    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }

    int pos;
    printf("\nENTER THE INDEX OF THE NUMBER YOU WANT TO DELETE : ");
    scanf("%d",&pos);

    if (pos<0 || pos>n){
        printf("INVALID INPUT");
    }
    else{
        for (int i=pos ; i<n ; i++){
            a[i]=a[i+1];
        }
    }
    
    n--;

    printf("ARRAY AFTER DELETION OF THE ELEMENT :\n");
    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }


    return 0; 
}