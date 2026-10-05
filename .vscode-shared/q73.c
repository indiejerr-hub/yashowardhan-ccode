//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main()
{
int a[10][10], sum[10];
int r, c, i, j;

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

for (i = 0; i < r; i++)
{
sum[i] = 0;

for (j = 0; j < c; j++)
{
sum[i] = sum[i] + a[i][j];
}
}

for (i = 0; i < r; i++)
{
printf("%d ", sum[i]);
}

return 0;
}