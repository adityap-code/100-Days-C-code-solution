// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main () {
    float n , d , s=0;
    printf("ENTER NUMBER : ");
    scanf("%f",&n);

    for (int i=1 ; i<=n ; i++){
        d=((2*i)+1)/((2*i)+2);
        s=s+d;
    }
    printf("SUM OF SERIES IS : %f",s);
    return 0;
}