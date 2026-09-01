// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main () {
    int t,hr,min,sec;
    printf("ENTER TIME IN SECONDS : ");
    scanf("%d",&t);
    hr=(t/3600);
    min=(t%3600)/60;
    sec=t%60;
    printf("time : %d:%d:%d (HH:MM:SS)\n",hr,min,sec);    
    return 0;
}