//Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main()
{
int a[10][10], r, c, i, j, flag = 1;

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
printf("False\n");
return 0;
}

for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
if (a[i][j] != a[j][i])
{
flag = 0;
break;
}
}
if (flag == 0)
break;
}

if (flag == 1)
printf("True\n");
else
printf("False\n");

return 0;
}