#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
	for (j = 1; j < 10; j++)
	{
		if (i < j && i != j)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
