#include "main.h"
/**
*straight_line - draws straitght lines
*@n: number of lines the characters should be printed
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

