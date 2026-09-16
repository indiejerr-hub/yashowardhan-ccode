//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main()
{
int a, b, temp;

printf ("Enter two positive integers: ");
if (scanf ("%d %d", &a, &b) != 2 || a <= 0 || b <= 0)
{
printf ("Enter two valid positive integers.\n");
return 1;
}

while (b != 0)
{
temp = b;
b = a % b;
a = temp;
}
printf ("HCF (GCD) = %d\n", a);

return 0;
}