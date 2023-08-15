#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d - pointer to dog initials
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
	return (NULL);
}
if ((d -> name) == NULL)
{
	printf(" Name: (nil)\n");
}
if ((d -> age) == NULL)
{
        printf(" Age: (nil)");
}
if ((d -> owner) == NULL)
{
        printf("Owner: (nil)");
}
else {
printf("Name: %s\n Age: %.2f\n Owner: %s\n", name, age, owner);
}
