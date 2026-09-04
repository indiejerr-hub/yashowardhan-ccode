//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main()
{
int a;

printf ("Enter the value of a: ");
scanf ("%d", &a);

if (a % 2 == 0)
{
printf ("a is even");
}

else
{
printf ("a is odd");
}

return 0;
}