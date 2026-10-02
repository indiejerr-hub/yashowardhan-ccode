//Q68: Delete an element from an array.

#include <stdio.h>
int main()
{
int arr[100], n, i, pos;

scanf("%d", &n);

if (n < 1 || n > 100)
return 1;

for (i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

scanf("%d", &pos);

if (pos < 0 || pos >= n)
{
printf("Invalid Position\n");
return 0;
}

for (i = pos; i < n - 1; i++)
{
arr[i] = arr[i + 1];
}

n--;

for (i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}

return 0;
}