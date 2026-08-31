<<<<<<< HEAD
//Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main () {
    float a,b,c;
    float d,r1,r2,realpart,imagepart;
    printf("ENTER COFFICIENTS a : ");
    scanf("%f",&a);
    printf("ENTER COFFICIENTS b : ");
    scanf("%f",&b);
    printf("ENTER COFFICIENTS c : ");
    scanf("%f",&c);
    if (a==0){
        printf("NOT A QUADRATIC EQUATION");
        return 0;
    }

    d=b*b-4*a*c;

    if (d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nRoots are Real and Distinct.\n ");
        printf("root 1=%.2f\n",r1);
        printf("root 2=%.2f\n",r2);
    }

    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("\nRoots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }

    else{
        realpart = -b / (2 * a);
        imagepart = sqrt(-d) / (2 * a);
        printf("\nRoots are Complex (Imaginary).\n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imagepart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imagepart);
    }
    
    return 0;
=======
//Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main () {
    float a,b,c;
    float d,r1,r2,realpart,imagepart;
    printf("ENTER COFFICIENTS a : ");
    scanf("%f",&a);
    printf("ENTER COFFICIENTS b : ");
    scanf("%f",&b);
    printf("ENTER COFFICIENTS c : ");
    scanf("%f",&c);
    if (a==0){
        printf("NOT A QUADRATIC EQUATION");
        return 0;
    }

    d=b*b-4*a*c;

    if (d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nRoots are Real and Distinct.\n ");
        printf("root 1=%.2f\n",r1);
        printf("root 2=%.2f\n",r2);
    }

    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("\nRoots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }

    else{
        realpart = -b / (2 * a);
        imagepart = sqrt(-d) / (2 * a);
        printf("\nRoots are Complex (Imaginary).\n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imagepart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imagepart);
    }
    
    return 0;
>>>>>>> 872e7e8adf5e04ae96a6b53b31444d58265b538f
}