//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
float s1, s2, s3;
printf ("Enter the lengths of each side of the triangle: ");
scanf ("%f %f %f", &s1, &s2, &s3);

if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1))
{
if (s1 == s2 && s2 == s3)
{
printf ("The triangle is equilateral\n");
}
else if (s1 == s2 || s2 == s3 || s1 == s3)
{
printf ("The triangle is isosceles\n");
}
else
{
printf ("The triangle is scalene\n");
}
}

else
{
printf ("This does not form a triangle\n");
}
return 0;
}