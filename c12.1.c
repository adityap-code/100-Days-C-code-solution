/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main () {
    int a,b=0;
    printf("HOW MANY DAYS ARE LATE : ");
    scanf("%d",&a);

    if (a<=0){
        printf("NO LATE FEES");
    }
    else if (a<=5){
        b=a*2;
        printf("LATE FEES : Rs.%d",b);        
    }
    else if (a<=10) {
        b=(5*2)+(a-5)*4;
        printf("LATE FEES : Rs.%d",b);
    }
    else if (a<=30) {
        b=(5*2)+(5*4)+(a-10)*6;
        printf("LATE FEES : Rs.%d",b);
    }
    else {
        printf("MEMBERSHIP CANCELLED");
    }
    return 0;
}