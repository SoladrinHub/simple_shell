#include "_shell.h"
/**
 * str_delim - Counts characters until null or the select char is found
 * @s: Pointer to string to be counted
 * @c: selected char, stops counting process when found
 * Return: number of characters counted
*/
int str_delim(char *s, char c)
{
	int i = 0;
	char select2 = c;

	if (c == ' ')
		select2 = 9;
	while (s[i] != '\0' && s[i] != c && s[i] != select2 && s[i] != '\n')
	{
		i++;
	}
	return (i);
}
