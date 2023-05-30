#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;  /* Handle null pointer case */

	int length = 0;
	char *start = s;
	char *end = s;

	/* Find the end of the string */
	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;  /* Adjust the end pointer to the last character */

	/* Swap characters from start to end */
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

