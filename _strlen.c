#include "_shell.h"

/**
 * _strlen - function that returns the length of a string
 * @s: Pointer to the string
 * Return: the length
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
