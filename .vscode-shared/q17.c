//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
float a, b, c, disc, r1, r2, real, imag;

printf ("Enter the coefficients a, b, and c: ");
scanf ("%f %f %f", &a, &b, &c);

if (a == 0)
{
printf ("a cannot be zero");
return 0;
}

disc = b * b - 4 * a * c;

if (disc > 0)
{
r1 = (-b + sqrt (disc)) / (2 * a);
r2 = (-b - sqrt (disc)) / (2 * a);

printf ("\nRoots are real and distinct\n");
printf ("Root 1 = %.2f ", r1);
printf ("Root 2 = %.2f ", r2);
}

else if (disc == 0)
{
r1 = -b / (2 * a);

printf ("\nRoots are real and equal\n");
printf ("Root 1 = Root 2 = %.2f ", r1);
}

else
{
real = -b / (2 * a);
imag = sqrt (-disc) / (2 * fabs (a));

printf ("\nRoots are complex\n");
printf ("Root 1 = %.2f + %.2fi ", real, imag);
printf ("Root 2 = %.2f - %.2fi ", real, imag);
}

return 0;
}