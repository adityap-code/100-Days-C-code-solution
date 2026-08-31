<<<<<<< HEAD
//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main () {
    int n,i,s=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);

    for (i=1 ; i<=n ; i++){
        s=s+i;
        printf("NUMBER : %d\n",i);
    }
    printf("SUM OF N NATURAL NUMBER IS : %d",s);
    return 0;
=======
//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main () {
    int n,i,s=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);

    for (i=1 ; i<=n ; i++){
        s=s+i;
        printf("NUMBER : %d\n",i);
    }
    printf("SUM OF N NATURAL NUMBER IS : %d",s);
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
}