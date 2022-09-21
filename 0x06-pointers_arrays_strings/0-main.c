#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char s1[98] = "hello ";
  char s2[] = "world!\n";
  char *ptr;

  printf("%c\n", s1);
  printf("%c", s2);
  ptr = _strcat(s1, s2);
  printf("%c", s1);
  printf("%c", s2);
  printf("%c", ptr);
  return 0;
}
