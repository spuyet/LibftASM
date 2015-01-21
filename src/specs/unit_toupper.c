#include <ctype.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_toupper.h"

void  unit_toupper(void)
{
  int   i;
  int   r;
  int   c;

  i = 1;
  r = 0;
  c = 96;
  printf("Unit tests for TO_UPPER\n---------------------\n");
  while (i < 5)
  {
    printf("TEST #%d: ", i);
    r += unit_toupper_test(c);
    c += 10;
    i++;
  }
  printf("[%d] Tests failed !\n---------------------\n", r);
}

int   unit_toupper_test(int c)
{
  if (ft_toupper(c) != toupper(c))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0); 
}