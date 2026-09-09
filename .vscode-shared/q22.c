//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
float cp, sp, pro, los, proper, losper;

printf ("Enter cost price: ");
scanf ("%f", &cp);

printf ("Enter selling price: ");
scanf ("%f", &sp);

if (cp <= 0)
{
printf ("Cost price must be greater than zero");
return 1;
}

if (sp > cp)
{
pro = sp - cp;
proper = (pro / cp) * 100;

printf ("Profit = %.2f ", pro);
printf (" Profit percentage = %.2f%% ", proper);
}

else if (cp > sp)
{
los = cp - sp;
losper = (los / cp) * 100;

printf ("Loss = %.2f ", los);
printf (" Loss percentage = %.2f%% ", losper);
}

else
{
printf ("Balancing point");
}

return 0;
}