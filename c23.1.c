// Write a program to find the sum of the series: c+ ... up to n terms.

#include <stdio.h>

int main () {
    float n ;
    float s=0;
    printf("ENTER NUMBER : ");
    scanf("%f",&n);

    for (float i=1 ; i<n ; i++){
        s=s+((2*i)/((4*i)-1));
    }
    printf("SUM OF THID SERIES IS : %.2f",s);

    return 0;
}