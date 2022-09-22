#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'N' && s[i] <= 'Z') ||
					(s[i] >= 'n' && s[i] <= 'z'))
				s[i] -= 13;
			else
				s[i] += 13;
			i++;
		}
		i++;
	}
	return (s);
}
