#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Height, Weight, mHeight, BMI;
    printf("\t\t\tWelcome to BMI(Body Mass Index) Calculator.\n\n");
    printf("\nPlease Enter Your Height (in Inches) = ");
    scanf("%f", &Height);
    printf("\nPlease Enter Your Weight (in Kilogram) = ");
    scanf("%f", &Weight);
    mHeight=Height/39.37;
    BMI=Weight/(mHeight*mHeight);
    printf("\nYour BMI is = %.2f", BMI);
    getch();
    return 0;
}
