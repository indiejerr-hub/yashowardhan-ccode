//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>
int main()
{
int a[10][10], r, c, i, j, d;

scanf("%d %d", &r, &c);

if (r < 1 || r > 10 || c < 1 || c > 10)
return 1;

for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
scanf("%d", &a[i][j]);
}
}

for (d = 0; d < r + c - 1; d++)
{
if (d % 2 == 0)
{
for (i = d; i >= 0; i--)
{
j = d - i;

if (i < r && j < c)
printf("%d ", a[i][j]);
}
}
else
{
for (j = d; j >= 0; j--)
{
i = d - j;

if (i < r && j < c)
printf("%d ", a[i][j]);
}
}
}

return 0;
}