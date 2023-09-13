#include "main.h"
/**
*print_alphabet - function to print lower case ten times
*Return: always 0
*/
void print_alphabet(void)
{
char j;
int i;
for (i = 0; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');
}
}
