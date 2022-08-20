#include "monty.h"

/**
 * isdigit_s - checks if a string is only made up of digits (no negative)
 * @s: str to be checked
 * Return: 1 if all are digits, 0 if at least 1 is not a digit
 */
int isdigit_s(char *s)
{
	int i = 1;

	if (!s)
		return (0);
	if ((s[0] < '0' || s[0] > '9') && s[0] != '-')
		return (0);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}