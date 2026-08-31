<<<<<<< HEAD
//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char x;
    printf("ENTER CHARATER : ");
    scanf("%c",&x);
    if (x>='A' && x<='Z'){
        printf("THE CHARATER IS UPPER CASE CHARATER : %c \n",x);
    }
    else if (x>='a' && x<='z'){
        printf("THE CHARATER IS LOWER CASE CHARATER : %c \n",x);
    }
    else if(x>='0' && x<='9' ){
        printf("THE CHARATER YOU ENTERED IS NOT A CHARATER IT IS A DIGIT ");
    }
    else{
        printf("CHARATER ENTERED IS SPECIAL CHARATER ");
    }
    return 0;
=======
//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char x;
    printf("ENTER CHARATER : ");
    scanf("%c",&x);
    if (x>='A' && x<='Z'){
        printf("THE CHARATER IS UPPER CASE CHARATER : %c \n",x);
    }
    else if (x>='a' && x<='z'){
        printf("THE CHARATER IS LOWER CASE CHARATER : %c \n",x);
    }
    else if(x>='0' && x<='9' ){
        printf("THE CHARATER YOU ENTERED IS NOT A CHARATER IT IS A DIGIT ");
    }
    else{
        printf("CHARATER ENTERED IS SPECIAL CHARATER ");
    }
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
} 