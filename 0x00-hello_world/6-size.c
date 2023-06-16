#include <stdio.h>
/**
 * main - Entry point
 * Description: print sizes of a char, an int,
 * long int, long long int and a float
 * Return: Always (0) Success
 */
int main(void)
{
	char c;
	int num;
	long int ln;
	long long int lln;
	float fl;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(num));
	printf("size of a long int: %zu byte(s)\n", sizeof(ln));
	printf("size of a long long int: %zu byte(s)\n", sizeof(lln));
	printf("size of a float: %zu byte(s)\n", sizeof(fl));
	return (0);
}
