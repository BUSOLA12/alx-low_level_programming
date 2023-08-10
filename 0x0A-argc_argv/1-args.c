#include <stdio.h>
/**
 * main - prints the number arguments passed
 * @argc: number of arguments
 * @argv: array od arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
