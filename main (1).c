/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float distance,Meters,feet,inches,centimeters;
    printf("Distance : ");
    scanf("%f",&distance);
    Meters=distance*1000;
    feet=distance*3280.84;
    inches=distance*39370.1;
    centimeters=distance*100000;
    printf("Meters : %.2f m",Meters);
    printf("\nFeet : %.2f ft",feet);
    printf("\nInches : %.2f in",inches);
    printf("\nCentimeters : %.2f cm",centimeters);
    return 0;
}

