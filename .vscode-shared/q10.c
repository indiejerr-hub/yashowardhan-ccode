//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
int seconds, hour, min, sec;

printf ("Enter time in seconds: ");
scanf ("%d", &seconds);

hour = seconds / 3600;
min = (seconds % 3600) / 60;
sec = seconds % 60;

printf ("Time = %02d:%02d:%02d", hour, min, sec);
return 0;
}