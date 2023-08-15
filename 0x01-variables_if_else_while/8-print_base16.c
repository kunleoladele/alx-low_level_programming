#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alphabet;

	for (num = 48; num < 58; num++)
		putchar(num);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
