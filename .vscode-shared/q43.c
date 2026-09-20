//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main()
{
int num, original, digit, i, fact, sum = 0;

printf("Enter a number: ");
scanf("%d", &num);

if (num < 0)
{
printf("Please enter a non-negative number.\n");
return 0;
}

original = num;

do
{
digit = num % 10;
fact = 1;

for (i = 1; i <= digit; i++)
{
fact = fact * i;
}

sum = sum + fact;
num = num / 10;

} while (num != 0);

if (sum == original)
{
printf("%d is a Strong Number.\n", original);
}
else
{
printf("%d is Not a Strong Number.\n", original);
}

return 0;
}