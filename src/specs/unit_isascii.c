#include <stdio.h>
#include <ctype.h>
#include "libfts.h"
#include "unit_isascii.h"

void  unit_isascii(void)
{
    int   i;
    int   r;
    int   c;

    i = 1;
    r = 0;
    c = -5;
    printf("Unit tests for IS_ASCII\n---------------------\n");
    while (i < 5)
    {
      printf("TEST #%d: ", i);
      r += unit_isascii_test(c);
      c+=55;
      i++;
    }
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int   unit_isascii_test(int c)
{
  if (ft_isascii(c) != isascii(c))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0); 
}
