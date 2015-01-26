#include <stdio.h>
#include <string.h>
#include "libfts.h"
#include "unit_strdup.h"

void	unit_strdup(void)
{
  size_t   r;

  printf("Unit tests for STRDUP\n---------------------\n");
  printf("TEST #1: ");
  r = unit_strdup_test("TEST 1");
  printf("TEST #2: ");
  r += unit_strdup_test(";fljgrwelk;hgljkrehkgrhlkjershgkjrejkghrlekjh");
  printf("TEST #3: ");
  r += unit_strdup_test("");
  printf("TEST #4: ");
  r += unit_strdup_test("42 school");
  printf("[%zu] Tests failed !\n---------------------\n", r);
}

size_t		unit_strdup_test(const char *s)
{
  char  *s2 = ft_strdup(s);
	if (strcmp(s2, s))
  	{
    	printf("\033[0;31mFailure\n\e[0m");
    	return (1);
  	}
  	printf("\033[0;32mSuccess\n\e[0m");
  	return (0);
}