//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main () {
    int n,r=0,c=0,z;
    printf("ENTER BINARY NUMBER : ");
    scanf("%d",&n);
	
    printf("\n1's COMPLEMENT OF BINARY NUMBER IS ");    
	z = n;
    while (z > 0){
		c++;
        
        z=z/10;
    }
    
    while (n>0){
        r = r*10+(n%10);
        n = n/10;
    }
    for(int i=0 ; i<c ; i++){
        if (r%10==0){
            printf("1");
        }
        else {
            printf("0");
        }
        r=r/10;
	}
    
    
    return 0;
    }