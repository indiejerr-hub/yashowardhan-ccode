//Q57: Find the sum of array elements.

#include <stdio.h>
int main()
{
int arr[100], n, i;
long long sum = 0;

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
sum = sum + arr[i];
}

printf("Sum of array elements = %lld\n", sum);

return 0;
}
