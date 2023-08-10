#include <stdio.h>
#include "main.h"
/**
 * main - prints arguments passed to it
 * @argc: number of arguments
 * @argv: arguments passed to main
 * @count: iteration
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
