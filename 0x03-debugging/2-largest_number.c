#include <stdio.h>
#include "main.h"

/**
 * main - print the largest of 3 numbersd
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest(int a, int b, int c)
{{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}}
