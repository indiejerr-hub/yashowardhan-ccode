//Q83: Count vowels and consonants in a string.

#include <stdio.h>
int main()
{
char str[200], ch;
int i, vowels = 0, consonants = 0;

fgets(str, sizeof(str), stdin);

for (i = 0; str[i] != '\0'; i++)
{
ch = str[i];

if (ch >= 'A' && ch <= 'Z')
ch = ch + 32;

if (ch >= 'a' && ch <= 'z')
{
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
vowels++;
else
consonants++;
}
}

printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

return 0;
}