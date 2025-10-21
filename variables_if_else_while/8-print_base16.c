#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: assign a random number to the variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char ascii;
  char letter;

  ascii = 47;

  while (ascii != 57)
  {
    ascii++;
    putchar(ascii);
  }
  letter = 96;
  while (letter != 102)
  {
    letter++;
    putchar(letter);
  }
  putchar('\n');
  return (0);
}
