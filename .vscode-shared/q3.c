//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
int l, b, area, peri;

printf ("Enter length: ");
scanf ("%d", &l);
printf ("Enter breadth: ");
scanf ("%d", &b);

area = l * b;
peri = 2 * (l + b);

printf ("Area = %d ", area);
printf ("Perimeter = %d ", peri);
return 0;
}