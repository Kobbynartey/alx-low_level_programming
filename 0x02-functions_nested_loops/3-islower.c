#include "main.h"
/**
 * _islower-check if character is lowercase.
 
 * c: check if it islowercase.
 
 * Return: 1 if c lowercase otherwise 0.
 */



int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
