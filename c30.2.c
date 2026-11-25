// Count positive, negative, and zero elements in an array.

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

    int p=0 ;
    int ne=0 ;
    int z=0 ;

    for (int i=0 ; i<n ; i++){
        if(a[i]>0){
            p++;
        }
        else if (a[i]<0) {
            ne++;
        }
        else{
            z++;
        }
    } 
    printf("\nPOSITIVE : %d",p);
    printf("\nNEGATIVE : %d",ne);
    printf("\nZERO : %d",z);
    
    return 0;

}