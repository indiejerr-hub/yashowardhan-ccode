//Q61: Search for an element in an array using linear search.

#include <stdio.h>
int main()
{
int arr[100], n, i, key, found = 0;

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

printf("Enter the element to search: ");
if (scanf("%d", &key) != 1)
{
printf("Invalid search element.\n");
return 1;
}

for (i = 0; i < n; i++)
{
if (arr[i] == key)
{
printf("Element %d found at position %d.\n", key, i + 1);
found = 1;
break;
}
}

if (found == 0)
{
printf("Element %d not found in the array.\n", key);
}

return 0;
}