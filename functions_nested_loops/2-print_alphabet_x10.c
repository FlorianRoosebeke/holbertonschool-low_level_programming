#include "main.h"
/**
 * print_alphabet_x10 - affiche l'alphabet en minuscules 10 fois
 * suivi d'un retour à la ligne
 * print_alphabet_x10 -x10
 */
void print_alphabet_x10(void)
{
	char cha;
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (cha = 'a' ; cha <= 'z' ; cha++)

			_putchar(cha);
		_putchar('\n');
	}
}
