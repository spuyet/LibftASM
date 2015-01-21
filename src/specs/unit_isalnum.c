#include <stdio.h>
#include <ctype.h>
#include "libfts.h"
#include "unit_isalnum.h"


void   unit_isalnum(void)
{
  int   r;

    r = 0;
    printf("Unit tests for IS_ALNUM\n---------------------\n");
    printf("TEST #1: ");
    r += unit_isalnum_one();
    printf("TEST #2: ");
    r += unit_isalnum_two();
    printf("TEST #3: ");
    r += unit_isalnum_three();
    printf("TEST #4: ");
    r += unit_isalnum_four();
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int   unit_isalnum_one(void)
{
  if (ft_isalnum('c') != isalnum('c'))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0); 
}

int   unit_isalnum_two(void)
{
  if (ft_isalnum(']') != isalnum(']'))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0);  
}

int   unit_isalnum_three(void)
{
  if (ft_isalnum('6') != isalnum('6'))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0);  
}

int   unit_isalnum_four(void)
{
  if (ft_isalnum('O') != isalnum('O'))
  {
    printf("\033[0;31mFailure\n\e[0m");
    return (1);
  }
    printf("\033[0;32mSuccess\n\e[0m");
  return (0);  
}