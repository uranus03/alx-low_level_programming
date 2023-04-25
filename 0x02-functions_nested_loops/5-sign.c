#include "main.h"
/**
  *print_sign - prints + if n is greater than zero,  prints 0 if n is zero, prints - if n is less than zero
  *@n: the input number as an integer
  *Return: Return 1 if n is greater than zero, Return 0 if n is zero, Return -1 if n is less than zero
  */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
