#include "shell.h"

/**
 * _strlen - returns the Length of a Str
 * @s: A String whose length to check
 *
 * Return: Integer length of that string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @s1: the 1st strang
 * @s2: the 2nd strang
 *
 * Return: Negative if s1 < s2, 
 *
 * Positive if s1 > s2, zero if s1 == s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if Needle Starts with Haystack
 * @haystack: string to search
 * @needle: Finds the substrin
 *
 * Return: address of next Chararacter of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - joins two strings
 * @dest: The Destination buffer
 * @src: A source buffer
 *
 * Return: Pointer to destination Buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
