#include "shell.h"

/**
 * _memset - fills memory with a Constants byte
 * @s: memory area pointer
 * @b: the byte to fill *s with
 * @n: the amount of bytes to be filled
 * Return: (s) a Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - free a string of String
 * @pp: String of Strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a Block of memory
 * @ptr: previous malloc'ated block Pointer
 * @old_size: Byte size of previous block
 * @new_size: Byte size of new block
 *
 * Return: Pointer to da ol'block nameen
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
