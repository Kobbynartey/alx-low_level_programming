#include "main.h"
/**
 * _isalpha - check if character is lowercase or uppercase
 * @c: check if it islowercase.
 * Return: 1 if c lowercase/uppercase otherwise 0.
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
