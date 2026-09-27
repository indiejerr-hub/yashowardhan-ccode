//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>
int main()
{
int arr[100], n, i, max, min;

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

max = arr[0];
min = arr[0];

for (i = 1; i < n; i++)
{
if (arr[i] > max)
{
max = arr[i];
}

if (arr[i] < min)
{
min = arr[i];
}
}

printf("Maximum element = %d\n", max);
printf("Minimum element = %d\n", min);

return 0;
}