#include <stdio.h>

/**
* main - prints alphabets in lower case
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
		putchar('\n');
		return (0);
}
