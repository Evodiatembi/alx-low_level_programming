#include "main.h"
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%dd is positive\n", i);
}
else if (i == 0)
{
printf("%d i zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
