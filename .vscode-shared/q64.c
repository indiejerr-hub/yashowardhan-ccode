//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main()
{
long long num;
int freq[10] = {0};
int digit, i, max = 0, result = 0;

scanf("%lld", &num);

if (num < 0)
num = -(num + 1) + 1;

do
{
digit = num % 10;
freq[digit]++;
num = num / 10;
} while (num != 0);

for (i = 0; i < 10; i++)
{
if (freq[i] > max)
{
max = freq[i];
result = i;
}
}

printf("%d\n", result);

return 0;
}