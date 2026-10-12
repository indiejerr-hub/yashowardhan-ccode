//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
int main()
{
char str[200], ch;
int i, spaces = 0, digits = 0, special = 0;

fgets(str, sizeof(str), stdin);

for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
{
ch = str[i];

if (ch == ' ')
{
spaces++;
}
else if (ch >= '0' && ch <= '9')
{
digits++;
}
else if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
{
special++;
}
}

printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

return 0;
}