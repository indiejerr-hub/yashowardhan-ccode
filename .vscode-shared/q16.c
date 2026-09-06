//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main()
{
int a, b, c;
printf ("Enter the values of a, b, and c: ");
scanf ("%d %d %d", &a, &b, &c);

if (a > b)
{
if (a > c)
{
printf ("a is greatest");
}
else
{
printf (" c is greatest");
}
}

else if (b > c)
{
printf ("b is greatest");
}

else
{
printf ("c is greatest");
}
return 0;
}