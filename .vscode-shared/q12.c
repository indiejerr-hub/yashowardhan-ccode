//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
int a;
printf ("Enter the value of a: ");
scanf ("%d", &a);

if (a >= 0)
{
if (a == 0)
{
printf ("a is equal to zero");
}
else
{
printf ("a is positive");
}
}
else
{
printf ("a is negative");
}
return 0;
}