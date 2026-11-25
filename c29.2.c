//Find the maximum and minimum element in an array.

#include<stdio.h>

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

    int max=a[0];
    int min=a[0];

    for (int i=1 ; i<n ; i++){
        if (a[i]>max){
            max=a[i];
        }
        if (a[i]<min){
            min=a[i];
        }
    }

    printf("\nMAXIMUM NUMBER IS : %d\n",max);
    printf("MINIMUM NUMBER IS : %d\n",min);
    return 0;
}