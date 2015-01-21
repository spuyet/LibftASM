#include <ctype.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_tolower.h"

void  unit_tolower(void)
{
  int   i;
  int   r;
  int   c;

  i = 1;
  r = 0;
  c = 64;
  printf("Unit tests for TO_LOWER\n---------------------\n");
  while (i < 5)
  {
    printf("TEST #%d: ", i);
    r += unit_tolower_test(c);
    c += 10;
    i++;
  }
  printf("[%d] Tests failed !\n---------------------\n", r);
}

int   unit_tolower_test(int c)
{
  if (ft_tolower(c) != tolower(c))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0); 
}