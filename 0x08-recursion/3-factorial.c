#include "main.h"
/**
*factorial - function parameter
*
*@n: function parameter
*Return: return n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

