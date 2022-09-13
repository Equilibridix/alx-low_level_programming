#include "main.h"
/**
 * main - entry point
 * Description - print "_putchar\n"
 * return: 0(successful)
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
