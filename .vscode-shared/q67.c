//Q67: Insert an element in an array at a given position.

#include <stdio.h>
int main()
{
int arr[101], n, i, pos, element;

scanf("%d", &n);

if (n < 0 || n > 100)
return 1;

for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

scanf("%d %d", &pos, &element);

if (pos < 0 || pos > n)
{
printf("Invalid Position\n");
return 0;
}

for (i = n; i > pos; i--)
{
arr[i] = arr[i - 1];
}

arr[pos] = element;
n++;

for (i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}

return 0;
}