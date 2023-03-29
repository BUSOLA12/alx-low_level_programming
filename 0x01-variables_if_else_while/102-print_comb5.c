#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l;
    for (i = 48; i < 58; i++)
    {
        for (j = 48 ; j < 57; j++)
        {
            for (k = 48; k < 58; k++)
            {
                for (l = 49 ; l < 58; l++)
                {

               putchar(i);
            putchar(j);
            putchar(' ');
            putchar(k);
            putchar(l);
            if (i == 57 && j == 57 && k == 56 && l == 57)
                continue;
            putchar(',');
            putchar(' ');
            }

        }
    }
    }
    putchar('\n');
    return 0;
}

