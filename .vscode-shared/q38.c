//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
int num, rem;
long long value, sum = 0;

printf ("Enter a number: ");
scanf ("%d", &num);
value = num < 0 ? -(long long) num : num;

while (value != 0)
{
rem = value % 10;
sum = sum + rem;
value = value / 10;
}
printf ("Sum of digits = %d\n", sum);

return 0;
}