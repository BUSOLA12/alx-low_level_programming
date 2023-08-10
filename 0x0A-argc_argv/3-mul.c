#include <stdio.h>
#include "main.h"
/**
 * main- calculates multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments passed to main
 *
 * Return: 1 (argc = 0)
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc == 0)
{
char *str[] = "Error";
printf("%s\n", str);
return (1);
}
int result = argv[0] * argv[1];
print("%d\n", result);
return (0);
}
