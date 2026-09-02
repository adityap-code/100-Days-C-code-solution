/* Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>

int main () {
    int n , a;

    for (n=1 ; n<=5 ; n++){
        for (a=1 ; a<=n ; a++){
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}