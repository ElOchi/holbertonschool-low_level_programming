#include "holberton.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int check = 1;

	return ((int) (((char *)&check)[0]));
}
