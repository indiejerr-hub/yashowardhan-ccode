//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
int arr[100], n, i;
int positive = 0, negative = 0, zero = 0;

printf("Enter the number of elements: ");
if (scanf("%d", &n) != 1)
{
printf("Invalid array size.\n");
return 1;
}

if (n <= 0 || n > 100)
{
printf("Invalid array size.\n");
return 0;
}

printf("Enter %d elements:\n", n);

for (i = 0; i < n; i++)
{
if (scanf("%d", &arr[i]) != 1)
{
printf("Invalid array element.\n");
return 1;
}
}

for (i = 0; i < n; i++)
{
if (arr[i] > 0)
{
positive++;
}
else if (arr[i] < 0)
{
negative++;
}
else
{
zero++;
}
}

printf("Number of Positive Elements = %d\n", positive);
printf("Number of Negative Elements = %d\n", negative);
printf("Number of Zero Elements = %d\n", zero);

return 0;
}