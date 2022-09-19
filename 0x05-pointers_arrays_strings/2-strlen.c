#include "main.h"

/**
*_strlen - a function that returns the length of a string
*@s: char to check
*Desscription: this will return the length of a string
*Return: 0 is a success
*/

int_strlen(char *s)
{
int a = 0;

for (; *s++;)
	a++;
return (a);
}
