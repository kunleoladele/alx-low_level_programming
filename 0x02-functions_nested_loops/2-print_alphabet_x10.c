#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet a - z ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i;
int a;

for (i = 0; i <= 9; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
