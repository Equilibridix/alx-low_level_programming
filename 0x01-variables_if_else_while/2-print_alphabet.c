#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * 
 * Return: Return 0(successful)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
