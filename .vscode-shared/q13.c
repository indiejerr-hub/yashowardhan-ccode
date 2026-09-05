//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
int year;
printf ("Enter a year: ");
if (scanf ("%d", &year) != 1 || year <= 0)
{
printf ("Enter a valid year");
return 1;
}

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
printf ("%d is a leap year", year);
}

else
{
printf ("Not a leap year");
}

return 0;
}