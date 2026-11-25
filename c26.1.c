/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

int main () {
    int n , a;

    for (a=5 ; a>=1 ; a--){
        for (n=1 ; n<a ; n++){
            printf(" ");
        }
        for (n=a ; n<=5 ; n++){
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}