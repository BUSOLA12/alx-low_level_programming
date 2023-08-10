#include <stdio.h>
#include "main.h"
/**
 * main - prints arguments passed to it
 * @argc: number of arguments
 * @argv: arguments passed to main
 * @i: iteration
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
