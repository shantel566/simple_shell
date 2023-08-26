#include "shell.h"

/**
 * bfree - frees the pointer and makes the address NULLs.
 * @ptr: Address of the Pointer to Free
 *
 * Return: 1 if its free, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
