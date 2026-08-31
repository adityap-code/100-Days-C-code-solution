/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <stdio.h>

int main () {
    int a,b=0;
    printf("ENTER UNITS OF ELECTRICITY CONSUMED : ");
    scanf("%d",&a);
    if (a<=0){
        printf("NO CHARGES APPLIED");
    }
    else if(a<=100) {
        b=a*5;
        printf("CHARGES APPLIED ARE : Rs.%d",b);
    }
    else if (a<=200) {
        b=(100*5)+(a-100)*7;
        printf("CHARGES APPLIED ARE : Rs.%d",b);
    }
    else if (a<=300){
        b=(100*5)+(100*7)+(a-200)*10;
        printf("CHARGES APPLIED ARE : Rs.%d",b);
    }
    else {
        b=(100*5)+(100*7)+(100*10)+(a-300)*12;
        printf("CHARGES APPLIED ARE : Rs.%d",b);
    }
    return 0;
}