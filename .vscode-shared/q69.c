//Q69: Find the second largest element in an array.

#include <stdio.h>
int main()
{
int arr[100], n, i;
int largest, second, found = 0;

scanf("%d", &n);

if (n < 2 || n > 100)
return 1;

for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

largest = arr[0];

for (i = 1; i < n; i++)
{
if (arr[i] > largest)
largest = arr[i];
}

for (i = 0; i < n; i++)
{
if (arr[i] < largest)
{
if (found == 0 || arr[i] > second)
{
second = arr[i];
found = 1;
}
}
}

if (found == 1)
printf("%d\n", second);
else
printf("Second largest does not exist\n");

return 0;
}