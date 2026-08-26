#include <stdio.h>

int main () {
    int aem1,c,evs;
    int credit1=3 , credit2=4 , credit3=2;
    int gradepoint1,gradepoint2,gradepoint3;
    float SGPA;
    printf("ENTER THE MARKS OF AEM1 : ");
    scanf("%d",&aem1);
    printf("ENTER THE MARKS OF C : ");
    scanf("%d",&c);
    printf("ENTER THE MARKS OF EVS : ");
    scanf("%d",&evs);
    if (aem1<=34){
        printf("THE GRADE IS 'F' AND GRADEPOINT IS '4' \n");
        gradepoint1=4;
    }
    else if (aem1>=35 && aem1<=44){
        printf("THE GRADE IS 'C' AND GRADEPOINT IS '5' \n");
        gradepoint1=5;
    }
    else if (aem1>=45 && aem1<=54){
        printf("THE GRADE IS 'B' AND GRADEPOINT IS '6' \n");
        gradepoint1=6;
    }
    else if (aem1>=55 && aem1<=64){
        printf("THE GRADE IS 'B+' AND GRADEPOINT IS '7' \n");
        gradepoint1=7;
    }
    else if (aem1>=65 && aem1<=74){
        printf("THE GRADE IS 'A' AND GRADEPOINT IS '8' \n");
        gradepoint1=8;
    }
    else if (aem1>=75 && aem1<=84){
        printf("THE GRADE IS 'A+' AND GRADEPOINT IS '9' \n");
        gradepoint1=9;
    }
    else {
        printf("THE GRADE IS 'O' AND GRADEPOINT IS '10' \n");
        gradepoint1=10;
    }

    if (c<=34){
        printf("THE GRADE IS 'F' AND GRADEPOINT IS '4' \n");
        gradepoint2=4;
    }
    else if (c>=35 && c<=44){
        printf("THE GRADE IS 'C' AND GRADEPOINT IS '5' \n");
        gradepoint2=5;
    }
    else if (c>=45 && c<=54){
        printf("THE GRADE IS 'B' AND GRADEPOINT IS '6' \n");
        gradepoint2=6;
    }
    else if (c>=55 && c<=64){
        printf("THE GRADE IS 'B+' AND GRADEPOINT IS '7' \n");
        gradepoint2=7;
    }
    else if (c>=65 && c<=74){
        printf("THE GRADE IS 'A' AND GRADEPOINT IS '8' \n");
        gradepoint2=8;
    }
    else if (c>=75 && c<=84){
        printf("THE GRADE IS 'A+' AND GRADEPOINT IS '9' \n");
        gradepoint2=9;
    }
    else {
        printf("THE GRADE IS 'O' AND GRADEPOINT IS '10' \n");
        gradepoint2=10;
    }

    if (evs<=34){
        printf("THE GRADE IS 'F' AND GRADEPOINT IS '4' \n");
        gradepoint3=4;
    }
    else if (evs>=35 && evs<=44){
        printf("THE GRADE IS 'C' AND GRADEPOINT IS '5' \n");
        gradepoint3=5;
    }
    else if (evs>=45 && evs<=54){
        printf("THE GRADE IS 'B' AND GRADEPOINT IS '6' \n");
        gradepoint3=6;
    }
    else if (evs>=55 && evs<=64){
        printf("THE GRADE IS 'B+' AND GRADEPOINT IS '7' \n");
        gradepoint3=7;
    }
    else if (evs>=65 && evs<=74){
        printf("THE GRADE IS 'A' AND GRADEPOINT IS '8' \n");
        gradepoint3=8;
    }
    else if (evs>=75 && evs<=84){
        printf("THE GRADE IS 'A+' AND GRADEPOINT IS '9' \n");
        gradepoint3=9;
    }
    else {
        printf("THE GRADE IS 'O' AND GRADEPOINT IS '10' \n");
        gradepoint3=10;
    }
    SGPA=((credit1*gradepoint1+credit2*gradepoint2+credit3*gradepoint3)/(credit1+credit2+credit3));
    printf("THE SGPA OF THIS SEMESTER IS : %f",SGPA);

    return 0;
}