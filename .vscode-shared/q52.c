//Q52: Write a program to print the following pattern:

//*

//*
//*

//*
//*
//*

//*
//*

//*

#include <stdio.h>
int main()
{
int i, j;
int rows[] = {1, 4, 5, 3, 1};

for (i = 0; i < 5; i++)
{
for (j = 1; j <= rows[i]; j++)
{
printf("*\n");
}

if (i < 4)
{
printf("\n");
}
}

return 0;
}