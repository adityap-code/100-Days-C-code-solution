/* Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main () {
    int a;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    
    return 0;
}*/

#include <stdio.h>

int main() 
{   int n;
    printf("enter number : ");
    scanf("%d",&n);
    
    if (n<=1)
    {
        printf(" not a prime number");
    }
    else {
        for (int i=2 ; i<n ; i++){
            if (n%i==0){
                printf("not a prime number\n");        
            }
            else {
                printf("prime number\n ");
            }         
        }
    }
    

    return 0;
}