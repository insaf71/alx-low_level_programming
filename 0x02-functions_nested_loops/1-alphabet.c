#include "main.h"

/**
 * print_alphabet - it prints the alphabets in lowercase
 * followed by a new line
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
_putchar('\n');
}
