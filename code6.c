#include <stdio.h>

int main() {
    char ch;
    printf("ENTER A CHARACTER : ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("THE CHARACTER YOU ENTERED IS VOWEL \n");
    }
    else {
        printf("THE CHARACTER YOU ENTERED IS CONSTANT \n");
    }
    return 0;
}