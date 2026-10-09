//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main()
{
char str[200];
int i = 0, count = 0;

fgets(str, sizeof(str), stdin);

while (str[i] != '\0' && str[i] != '\n')
{
count++;
i++;
}

printf("%d\n", count);

return 0;
}