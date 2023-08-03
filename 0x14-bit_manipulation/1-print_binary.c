#include "main.h"

/**
 * print_binary - Displays the binary similar to a decimal number
 * @num: The decimal number to be displayed in binary
 */
void print_binary(unsigned long int num)
{
int i, count = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = num >> i;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
