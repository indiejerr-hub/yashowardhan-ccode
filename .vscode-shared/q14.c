//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
char c;
printf ("Enter an alphabet: ");
scanf ("%c", &c);

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
{
printf ("%c is a vowel", c);
}

else
{
printf ("%c is a consonant", c);
}
}

else
{
printf ("Invalid input");
}

return 0;
}