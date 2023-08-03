#include "main.h"

/**
 * print_binary - Displays the binary similar to a decimal number
 * @n: The decimal number to be displayed in binary
 */
void print_binary(unsigned long int n)
{
int i, count = 0;

for (i = 63; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
count++;
}
else if (count)
{
_putchar('0');
}
}

_putchar(count ? '\0' : '0');
}
