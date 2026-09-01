//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
int a, b, c;

printf ("Enter the 1st number: ");
scanf ("%d", &a);
printf ("Enter the 2nd number: ");
scanf ("%d", &b),

printf ("a = %d ", a);
printf ("b = %d ", b);

c = a;
a = b;
b = c;

printf ("a = %d ", a);
printf ("b = %d ", b);
return 0;
}