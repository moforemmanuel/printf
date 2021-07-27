#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2, len3, len4, len5, len6;

	printf("\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("\n");

	len3 = _printf("%c%c%c%c\n", 'a', 'b', 'c', 'd');
	len4 = printf("%c%c%c%c\n", 'a', 'b', 'c', 'd');

	printf("\n");

	len5 = _printf("%s\n", "abcd123456");
	len6 = printf("%s\n", "abcd123456");

	printf("\n");

	printf("Length:[%d, %d, %d, %d, %d, %d]\n\n", len2, len, len3, len4, len5, len6);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	printf("\n");

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	
	printf("\n");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	printf("\n");

	printf("Len:[%d, %d]\n", len, len2);
    return (0);
}
