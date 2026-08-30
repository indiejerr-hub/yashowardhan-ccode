//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
int a, b, sum, diff, product, quotient;

printf ("Enter the value of a: ");
scanf ("%d", &a);

printf ("Enter the value of b: ");
scanf ("%d", &b);

sum = a + b;
diff = a - b;
product = a * b;
quotient = a/b;

printf ("Sum = %d ", sum);
printf ("Difference = %d ", diff);
printf ("Product = %d ", product);
printf ("Quotient = %d ", quotient);
return 0;
}