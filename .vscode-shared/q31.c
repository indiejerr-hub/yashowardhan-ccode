//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main()
{

int num, binary[32], i = 0, j;

printf ("Enter a decimal number: ");
scanf ("%d", &num);

if (num == 0)
{
printf ("Binary Equivalent = 0\n");
return 0;
}

while (num > 0)
{
binary[i] = num % 2;
num = num / 2;
i++;
}

printf ("Binary Equivalent = ");

for (j = i - 1; j >= 0; j--)
{
printf ("%d", binary[j]);
}

printf ("\n");
return 0;
}