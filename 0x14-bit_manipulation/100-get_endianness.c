#include "main.h"

/**
 * get_endianness - checked if exmachine is small or big en
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
