#include <ctype.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_isprint.h"

void    unit_isprint(void)
{
    int   i;
    int   r;
    int   c;

    i = 1;
    r = 0;
    c = 30;
    printf("Unit tests for IS_PRINT\n---------------------\n");
    while (i < 5)
    {
      printf("TEST #%d: ", i);
      r += unit_isprint_test(c);
      c += 40;
      i++;
    }
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int     unit_isprint_test(int c)
{
  if (ft_isprint(c) != isprint(c))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0); 
}