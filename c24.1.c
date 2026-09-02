/* Write a program to print the following pattern:
*
**
***
****
*****
*/

#include <stdio.h>

int main () {
    int n , a;

    for (n=1 ; n<=5 ; n++){
        for (a=1 ; a<=n ; a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}