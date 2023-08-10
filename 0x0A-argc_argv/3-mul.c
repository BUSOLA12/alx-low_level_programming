#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
int result = 0;
int sign = 1;
while (*str == ' ' || *str == '\t')
{
str++;
}
if (*str == '-')
{
sign = -1;
str++;
}
else if (*str == '+')
{
str++;
}
while (*str >= '0' && *str <= '9')
{
int digit = *str - '0';
result = result * 10 + digit;
str++;
}
return result * sign;
}

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
int result = _atoi(argv[0]) * _atoi(argv[1]);
print("%d\n", result);
return (0);
}
