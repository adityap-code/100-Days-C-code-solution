/* Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main () {
    int n , r;

    for (n=1 ; n<=5 ; n++ ){
        for (r=1 ; r<=5 ; r++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}