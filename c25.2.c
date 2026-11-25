/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main () {
    int a , n ;

    for (a=0 ; a<5 ; a++){
        for (n=0 ; n<a ; n++){
            printf (" ");
        }
        for (n=5 ; n>a ; n--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}