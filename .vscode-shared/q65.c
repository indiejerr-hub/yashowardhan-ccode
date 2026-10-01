//Q65: Search in a sorted array using binary search.

#include <stdio.h>
int main()
{
int arr[100], n, i, key;
int low, high, mid, found = -1;

scanf("%d", &n);

if (n < 1 || n > 100)
return 1;

for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

scanf("%d", &key);

low = 0;
high = n - 1;

while (low <= high)
{
mid = low + (high - low) / 2;

if (arr[mid] == key)
{
found = mid;
break;
}
else if (arr[mid] < key)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}

if (found != -1)
printf("Found at index %d\n", found);
else
printf("-1\n");

return 0;
}