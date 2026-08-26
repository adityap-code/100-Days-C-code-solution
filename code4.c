#include <stdio.h>

int main () {
    int i,n;
    int s=0;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++){
        printf("%d \n",i);
        s=s+i;
    }
    printf("THE SUM OF THE NUMBERS IS : %d",s);
    return 0;
}