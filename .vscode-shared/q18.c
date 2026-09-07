//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

#include <stdio.h>
int main()
{
int percent;
printf ("Enter your precentage: ");
scanf ("%d", &percent);

if (percent < 0 || percent > 100)
{
printf ("Invalid percentage");
}

else
{
switch (percent / 10)
{
case 10:

case 9: 
printf ("Grade A\n");
break;

case 8:
printf ("Grade B\n");
break;

case 7:
printf ("Grade C\n");
break;

case 6:
printf ("Grade D\n");
break;

default:
printf ("Grade F\n");
}
}

return 0;
}