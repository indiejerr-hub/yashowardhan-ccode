//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
float princi, roi, t, si, ci, amount;

printf ("Enter the principal amount: ");
scanf ("%f", &princi);
printf ("Enter the rate of interest: ");
scanf ("%f", &roi);
printf ("Enter the time (in years): ");
scanf ("%f", &t);

si = (princi * roi * t) / 100;

amount = princi * pow ((1 + roi / 100), t);
ci = amount - princi;

printf ("Simple Interest = %.2f ", si);
printf ("Compound Interest = %.2f ", ci);
return 0;
}