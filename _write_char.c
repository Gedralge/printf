#include "main.h"

/**
 * _write_char - writes the character to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and erno is set appropriately.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

