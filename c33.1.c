// Search in a sorted array using binary search.

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
    printf("\nENTER ELEMENT YOU WANT TO FIND : ");
    scanf("%d",&q);

    int l=0 , m , h=(n-1);
    int result = -1;

    while (l<=h){
        m=(l+h)/2;
        if (a[m]==q){
            result = m;
            break ; 
        }
    if (a[m]<q){
        l = m +1;
    }
    else{
        h = m -1;
    }
    }

    if (result != -1){
        printf("RESULT FOUND \nAT INDEX : %d\n",result);
    }
    else{
        printf("ELEMENT NOT FOUND AT THE ARRAY \n",result);
    }
    return 0;
}