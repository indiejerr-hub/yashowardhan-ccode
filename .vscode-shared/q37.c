//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>
int main()
{
int a, b, max;

printf ("Enter two positive integers: ");
if (scanf ("%d %d", &a, &b) != 2 || a <= 0 || b <= 0)
{
printf ("Enter two valid positive integers.\n");
return 1;
}

max = (a > b) ? a : b;

while (1)
{
if (max % a == 0 && max % b == 0)
{
printf ("LCM = %d\n", max);
break;
}

max++;
}

return 0;
}