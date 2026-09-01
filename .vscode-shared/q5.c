//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
float c;
double f;

printf ("Enter the temperature: ");
scanf ("%f", &c);

f = (c * 9/5) + 32;

printf ("Temperature in fahrenheit = %lf ", f);
return 0;
}