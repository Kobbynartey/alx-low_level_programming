#include "main.h"

/**
 * char *_strcat - appends the src string to the dest string
 * @s1 - string 1
 * @s2 - string 2
 * Return - pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char s1[100] = "Hello";
	char s2 [] = "C programmers";

	strcat(s1,s2);
	putchar(s1);
	
	return 0;
}
