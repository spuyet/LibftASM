#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_memset.h"

void    unit_memset(void)
{
  int   r;

  printf("Unit tests for MEMSET\n---------------------\n");
  printf("TEST #1: ");
  r = unit_memset_test('a', 9);
  printf("TEST #2: ");
  r += unit_memset_test('\n', 42);
  printf("TEST #3: ");
  r += unit_memset_test('u', 2000);
  printf("TEST #4: ");
  r += unit_memset_test('0', 99);
  printf("[%d] Tests failed !\n---------------------\n", r);
}

int     unit_memset_test(int c, size_t len)
{
  void  *s1 = malloc(len);
  void  *s2 = malloc(len);
  s1 = ft_memset(s1, c, len);
  s2 = memset(s2, c, len);
  if (memcmp(s1, s2, len))
  {
    printf("\033[0;31mFailure\n\e[0m");
    free(s1);
    free(s2);
    return (1);
  }
  printf("\033[0;32mSuccess\n\e[0m");
  free(s1);
  free(s2);
  return (0); 
}