#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	char *start = s;
	char *end = s;
	int length = 0;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

