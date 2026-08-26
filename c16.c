//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main () {
    float sp,cp;
    float p , ppercent , l , lpercent;
    printf("ENTER SELLING PRICE : ");
    scanf("%f",&sp);
    printf("ENTER COST PRICE : ");
    scanf("%f",&cp);
    if (sp>cp){
        p=sp-cp;
        ppercent=(p/cp)*100;
        printf("THE PROFIT PERCENTAGE IS : %f",ppercent);
    }
    else if (cp>sp) {
        l=cp-sp;
        lpercent=(l/cp)*100;
        printf("THE LOSS PERCENTAGE IS : %f",lpercent);
    }
    else {
        printf("THERE IS PROFIT AND NO LOSS");
    }
    return 0;
}