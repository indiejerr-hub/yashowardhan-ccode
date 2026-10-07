//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main()
{
int a[10][10], r, c, i, j, sum = 0;

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

if (r != c)
{
printf("Square matrix required\n");
return 0;
}

for (i = 0; i < r; i++)
{
sum = sum + a[i][i];
}

printf("%d\n", sum);

return 0;
}