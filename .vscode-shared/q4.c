//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
int r;
double area, cir;

printf ("Enter the length of the radius: ");
scanf ("%d", &r);

area = 3.14 * r * r;
cir = 2 * 3.14 * r;

printf ("Area = %.1f ", area);
printf ("Circumference = %.1f ", cir);
return 0;
}