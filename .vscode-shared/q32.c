//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main()
{
int num, ori, rev = 0, rem;

printf ("Enter a number: ");
scanf ("%d", &num);

if (num < 0)
{
printf ("%d is Not a Palindrome Number.\n", num);
return 0;
}

ori = num;

while (num != 0)
{
rem = num % 10;
rev = rev * 10 + rem;
num = num / 10;
}

if (ori == rev)
printf ("%d is a Palindrome Number.\n", ori);
else
printf ("%d is Not a Palindrome Number.\n", ori);

return 0;
}