//Insert an element in an array at a given position.

#include <stdio.h>

int main () {
    int n ; 
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&n);
    int a[n]; 

    printf("ENTER ELEMENT OF ARRAY : ");
    for (int i=0 ; i<n ; i++){
        scanf ("%d",&a[i]);
    }

    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }

    int num; 
    printf("\nENTER THE NUMBER YOU WANT TO INSERT : ");
    scanf("%d",&num);

    int q;
    printf("ENTER THE INDEX WHERE YOU WANT TO INSERT THE NUMBER : ");
    scanf("%d",&q);

    for (int i=n ; i>q ; i--){
        a[i]=a[i-1];
    }

    a[q]=num;
    n++;

    printf("ARRAY AFTER INSERTING THE NUMBER : ");
    for (int i=0 ; i<n ; i++){
        printf("%d  ",a[i]);
    }
    return 0;
}