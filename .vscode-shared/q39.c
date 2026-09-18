//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
int num, digit;
long long value;
int pro = 1;
int foundOdd = 0;

printf ("Enter a number: ");
scanf ("%d", &num);
value = num < 0 ? -(long long) num : num;

while (value != 0)
{
digit = value % 10;

if (digit % 2 != 0)
{
pro = pro * digit;
foundOdd = 1;
}
value = value / 10;
}

if (foundOdd)
printf ("Product of odd digits = %d\n", pro);
else
printf ("No odd digits found.\nProduct = 0\n");

return 0;
}