#include <stdio.h>
#include <stdlib.h>

/**
 * cent_exchange_to_coin - calculate the minimum number of coin
 * to change for an amount of money(cent)
 * @cent: money
 *
 * Description: This function is meant to calculate the minimum number
 * of coin to change for an amount of money
 * Return: return the number of coins
 */

int cent_exchange_to_coin(int cent)
{
	int Total_coin;
	int coin_25, coin_10, coin_5, coin_2, coin_1 = 0;

	for (; cent > 0;)
	{
		if (cent >= 25)
		{
			coin_25 += cent / 25;
			cent %= 25;
		}
		else if (cent >= 10)
		{
			coin_10 += cent / 10;
			cent %= 10;
		}
		else if (cent >= 5)
		{
			coin_5 += cent / 5;
			cent %= 5;
		}
		else if (cent >= 2)
		{
			coin_2 += cent / 2;
			cent %= 2;
		}
		else
		{
			coin_1 += cent / 1;
			cent %= 1;
		}
	}
	Total_coin = coin_25 + coin_10 + coin_5 + coin_2 + coin_1;
	return (Total_coin);
}

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: number of argument
 * @argv: argument vector
 *
 * Description: This program is meant to print the minimum number
 * of coins to make change for an amount of money
 * Return: if the number of arguments passed to your program is not
 * exactly 1, print Error, followed by a new line, and return 1
 */

int main(int argc, char **argv)
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("%d\n", cent_exchange_to_coin(cent));
		return (0);
	}
}

