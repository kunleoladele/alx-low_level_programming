#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{

unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}
