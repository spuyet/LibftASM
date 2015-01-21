#include <stdio.h>
#include "libfts.h"
#include "unit_puts.h"

void    unit_puts(void)
{
  int   r;
  
  printf("Unit tests for PUTS\n---------------------\n");
  r = unit_puts_test("TEST 1");
  r += unit_puts_test("test 2");
  r += unit_puts_test("");
  r += unit_puts_test("42 school");
  printf("[%d] Tests failed !\n---------------------\n", r);
}

int   unit_puts_test(const char *s)
{
  if (ft_puts(s) != puts(s))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
  printf("\033[0;32mSuccess\n\e[0m");
  return (0);
}