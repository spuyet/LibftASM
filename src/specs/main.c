#include <stdio.h>
#include "unit_bzero.h"
#include "unit_strcat.h"
#include "unit_isalpha.h"
#include "unit_isdigit.h"
#include "unit_isalnum.h"
#include "unit_isascii.h"
#include "unit_isprint.h"
#include "unit_toupper.h"
#include "unit_tolower.h"
#include "unit_puts.h"
#include "unit_strlen.h"
#include "unit_memset.h"
#include "unit_memcpy.h"

void  first_part_tests(void)
{
  unit_bzero();
  printf("\n");
  unit_strcat();
  printf("\n");
  unit_isalpha();
  printf("\n");
  unit_isdigit();
  printf("\n");
  unit_isalnum();
  printf("\n");
  unit_isascii();
  printf("\n");
  unit_isprint();
  printf("\n");
  unit_toupper();
  printf("\n");
  unit_tolower();
  printf("\n");
  unit_puts();
  printf("\n");
}

void  second_part_tests(void)
{
  unit_strlen();
  printf("\n");
  unit_memset();
  printf("\n");
  unit_memcpy();
  printf("\n");

}

int		main(void)
{
	printf("---------------------\n   BEGINNING TESTS\n---------------------\n\n");
  first_part_tests();
  second_part_tests();
  printf("---------------------\n      END TESTS\n---------------------\n\n");
	return (0);
}