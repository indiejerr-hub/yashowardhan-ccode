//Q85: Reverse a string.

#include <stdio.h>
int main()
{
char str[200], temp;
int i, j, length = 0;

fgets(str, sizeof(str), stdin);

while (str[length] != '\0' && str[length] != '\n')
{
length++;
}

for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}

str[length] = '\0';

printf("%s\n", str);

return 0;
}