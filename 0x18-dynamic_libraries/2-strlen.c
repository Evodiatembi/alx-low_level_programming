#include "main.h"
/**
*_strlen - funtion name
*@s: function parameter
*Return: the length of a string
*/
int _strlen(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
count++;
return (count);
}
