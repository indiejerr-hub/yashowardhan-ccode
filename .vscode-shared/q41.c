//Q41: Write a program to swap the first and last digit of a number

#include <stdio.h>
int main()
{
int num, first, last, middle, divisor = 1, swapped;

printf("Enter a number: ");
scanf("%d", &num);

if (num < 0)
{
printf("Please enter a positive number.\n");
return 0;
}

if (num < 10)
{
printf("Number after swapping = %d\n", num);
return 0;
}

last = num % 10;

while (num / divisor >= 10)
{
divisor = divisor * 10;
}

first = num / divisor;

middle = (num % divisor) / 10;

swapped = last * divisor + middle * 10 + first;

printf("Number after swapping = %d\n", swapped);

return 0;
}