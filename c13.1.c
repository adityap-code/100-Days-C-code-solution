//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>


int main () {
    int a,b;
    char c;
    printf("enter operators:");
    scanf("%c",&c);
    printf("Enter two nubers");
    scanf("%d %d",&a,&b);
    switch (c)
    {
    case '+':
        /* code */
        printf("Sum %d",a+b);
        break;
    
    case '-':
        /* code */
        printf("Dif %d",a-b);
        break;

    case '*':
       /*code*/
       printf("Multiply %d",a*b);
       break;     
    
    case'/':
       printf("Division %d",a/b);
       break;  


    }
    return 0;
}