#include "_shell.h"
/**
  * _isalpha - check if a character is an alphabet
  * @c: char to be checked.
  * Return: 1 if letter, 0 if not.
*/
int _isalpha(char c)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; alpha[i] != '\0'; i++)
	{
		if (alpha[i] == c)
			return (1);
	}

	return (0);
}
