#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr - Locates a substring.
 * @haystack: String to be searched
 * @needle: Substring to look for
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */

void print_chessboard(char (*a)[8])
{

int i, j;

for (i = 0 ; i < 8 ; i++)
{
	for (j = 0 ; j < 8 ; j++)
	{
	 printf("a[%d][%d] =  %d\n", i, j, a[i][j]);
	}
	putchar('\n');
}


}
