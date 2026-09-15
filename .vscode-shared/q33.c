//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main()
{
int num, ori, rem;
int dig = 0;
int powerIndex;
long long sum = 0;
long long digitPower;
int temp;

printf ("Enter a number: ");
scanf ("%d", &num);

if (num < 0)
{
printf ("%d is Not an Armstrong Number.\n", num);
return 0;
}

ori = num;
temp = num;

// Count the number of digits
while (temp != 0)
{
dig++;
temp = temp / 10;
}

temp = num;

// Calculate the sum of digits raised to the power of digits
while (temp != 0)
{
rem = temp % 10;
digitPower = 1;
for (powerIndex = 0; powerIndex < dig; powerIndex++)
{
digitPower = digitPower * rem;
}
sum = sum + digitPower;
temp = temp / 10;
}

if (sum == ori)
printf ("%d is an Armstrong Number.\n", ori);
else
printf ("%d is Not an Armstrong Number.\n", ori);

return 0;
}