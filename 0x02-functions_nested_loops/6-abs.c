#include "main.h"
/**
 * _abs - print an absolute number
 * @int: argument
 * Description: computes the absolute value of an integer
 * Return: return 1 on success
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (a);
	}
}
