//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
int a, b;

printf ("Enter 1st number: ");
scanf ("%d", &a);
printf ("Enter 2nd number: ");
scanf ("%d", &b);

printf ("a = %d ", a);
printf ("b = %d ", b);

a = a + b;
b = a - b;
a = a - b;

printf ("a = %d ", a);
printf ("b = %d ", b);
return 0;
}