//Q86: Check if a string is a palindrome.

#include <stdio.h>
int main()
{
char str[200];
int i, length = 0, flag = 1;

fgets(str, sizeof(str), stdin);

while (str[length] != '\0' && str[length] != '\n')
{
length++;
}

for (i = 0; i < length / 2; i++)
{
if (str[i] != str[length - i - 1])
{
flag = 0;
break;
}
}

if (flag == 1)
printf("Palindrome\n");
else
printf("Not palindrome\n");

return 0;
}