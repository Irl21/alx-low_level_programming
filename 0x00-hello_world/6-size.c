#include <stdio.h>
/**
 * main - entry point of function
 *
 * Return: always 0
 */
int main(void)
{
	char character;
	int integer;
	long longintegrer;
	long long llinteger;
	float floatingpoint;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long: %lu byte(s)\n", sizeof(longinteger));
	printf("Size of a long long: %lu byte(s)\n", sizeof(llinteger));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatingpoint));
	return (0);
}
