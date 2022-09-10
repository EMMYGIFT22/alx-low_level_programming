#include <stdio.h>

int main()
{
  char charType;
  int intType;
  long int longintType;
  long long int longlongintType;
  float floatType;
  printf("size of char: %d byte(s)\n", sizeof(charType));
  printf("size of int: %d bytes(s)\n", sizeof(intType));
  printf("size of long int: %d byte(s)\n", sizeof(longintType));
  printf("size of long long int: %d byte(s)\n", sizeof(longlongintType));
  printf("size of float: %d byte(s)\n", sizeof(floatType));
  return 0;
}

  
