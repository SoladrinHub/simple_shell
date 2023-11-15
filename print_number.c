#include "_shell.h"

/**
 * print_number - Save in buffer numbers to be printed
 * @n: number to be printed
 * @buffer: buffer where numbers are going to be saved
 * @pos: position of the buffer
 * Return: new position of the buffer
 */
size_t print_number(size_t n, char *buffer, size_t pos)
{
	ssize_t i, j, z = 1;
	size_t n1;

	n1 = n;
	for (i = 0; n / 10 != 0; i++)
		n = n / 10;

	for (j = 0; j <= i - 1; j++)
		z = z * 10;

	for (; z != 0;)
	{
		buffer[pos++] = (n1 / z) + '0';
		n1 = n1 % z;
		z = z / 10;
	}

	return (pos);
}
