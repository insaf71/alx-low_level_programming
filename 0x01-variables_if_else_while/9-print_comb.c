#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
	if (i != 9)
	{
		putchar(i + '0');
		putchar(',');
	}
		putchar(' ');
}
putchar('\n');
return (0);
}
