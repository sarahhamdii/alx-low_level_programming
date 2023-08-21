#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input string
 * @needle: string to be compared
 * Return: first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;
	len = 0;
	while (needle[len] != '\0')
		len++;
	while (*haystack != '\0')
	{
		if (_strcmp(haystack, needle) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
