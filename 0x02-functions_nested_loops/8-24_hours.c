#include "main.h"
/**
 * jack_bauer - it prints every minute of the day
 */
void jack_bauer(void)
{
int i, j, k, l;
for (i = 48; i < 51; i++)
{
for (j = 48; j < 52; j++)
{
for (k = 48; k < 54; k++)
{
for (l = 48; l < 58; l++)
{
putchar(i);
putchar(j);
putchar(':');
putchar(k);
putchar(l);
putchar('\n');
}
}
}
}
}
