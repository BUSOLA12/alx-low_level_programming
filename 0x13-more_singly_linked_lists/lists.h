#ifndef _LISTS_
#define _LISTS_


#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - type defintion for singly link list
 * @n: integer in each node
 * @next: pointer to the next node
 * Description: definition for singly link list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_s;

size_t print_listint(const listint_t *h);
#endif
