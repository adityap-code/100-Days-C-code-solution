// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main () {
    int n;
    int c[10]={0};
    int d,max=0,m;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);

    while (n!=0){
        d=n%10;
        c[d]++;
        n=n/10;
    }

    for (int i=0 ; i<10 ; i++){
        if (c[i]>max){
            max=c[i];
            m=i;
        }
    }
    printf("MOST OCCURING DIGIT IS : %d\n",m);
    printf("IT OCUURS %d TIMES",max);
    return 0;
}