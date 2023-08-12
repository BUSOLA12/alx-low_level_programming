#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the aeguments of my program
 * @ac: number of arguments
 * @av: pointer to arguments
 *
 * Return: a pointer to a new string (Success) NULL (failure)
 */
char *argstostr(int ac, char **av)
{
	int current_pos;
	int j;
	int total_length;
	int i;
	char *concatenated_str;

	       current_pos = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{

	total_length += strlen(av[i]) + 1;
	}

	concatenated_str = (char *) malloc(sizeof(char) * total_length + 1);
       for (j = 0; j < ac; j++)
       {
strcpy(concatenated_str + current_pos, av[j]);
current_pos += strlen(av[j]);
concatenated_str[current_pos] = '\n';
current_pos++;
       }
       concatenated_str[current_pos] = '\0';
       return (concatenated_str);

}
