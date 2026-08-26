//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main () {
    int a,b,c;
    printf("ENTER LENGTH OF SIDE : ");
    scanf("%d",&a);
    printf("ENTER LENGTH OF SIDE : ");
    scanf("%d",&b);
    printf("ENTER LENGTH OF SIDE : ");
    scanf("%d",&c);
    if (a==b && b==c && a==c){
        printf("EQUILATERAL TRIANGLE ");
    }
    else if (a==b || b==c || a==c){
        printf("ISOSCELES TRIANGLE");
    }
    else {
        printf("SCALENE TRIANGLE");
    }    
    return 0;
}