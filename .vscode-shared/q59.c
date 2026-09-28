//Q59: Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
int arr[100], n, i, even = 0, odd = 0;

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
if (arr[i] % 2 == 0)
{
even++;
}
else
{
odd++;
}
}

printf("Number of Even Elements = %d\n", even);
printf("Number of Odd Elements = %d\n", odd);

return 0;
}