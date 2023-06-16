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
	int j;
	long int i;
	long long int k;
	float fl;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(k));
	printf("size of a float: %lu byte(s)\n", sizeof(fl));
	return (0);
}
