#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libfts.h"
#include "unit_bzero.h"

void    unit_bzero(void)
{
    int   r;

    r = 0;
    printf("Unit tests for BZERO\n---------------------\n");
    printf("TEST #1: ");
    r += unit_bzero_int(42, sizeof(int));
    printf("TEST #2: ");
    r += unit_bzero_char('s', sizeof(char));
    printf("TEST #3: ");
    r += unit_bzero_string("This is a test", 14);
    printf("TEST #4: ");
    r += unit_bzero_float(4.42f, sizeof(float));
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int     unit_bzero_int(int n, size_t size)
{
    t_bzero     tests;

    tests.u.a = n;
    tests.v.a = n;
    bzero((void *)&(tests.u.a), size);
    ft_bzero((void *)&(tests.v.a), size);
    if (memcmp(&(tests.u.a), &(tests.v.a), size))
    {
      printf("\033[0;31mFailure\n\e[0m");
      return (1);
    }
    printf("\033[0;32mSuccess\n\e[0m");
    return (0);
}

int     unit_bzero_char(char c, size_t size)
{
    t_bzero     tests;

    tests.u.b = c;
    tests.v.b = c;
    bzero((void *)&(tests.u.b), size);
    ft_bzero((void *)&(tests.v.b), size);
    if (memcmp(&(tests.u.b), &(tests.v.b), size))
    {
      printf("\033[0;31mFailure\n\e[0m");
      return (1);
    }
    printf("\033[0;32mSuccess\n\e[0m");
    return (0);
}

int     unit_bzero_string(char *s, size_t size)
{
    t_bzero     tests;
    size_t      i;

    i = 0;
    tests.u.c = (char *)malloc(size * sizeof(char) + 1);
    tests.v.c = (char *)malloc(size * sizeof(char) + 1);
    tests.u.c = strcpy(tests.u.c, s);
    tests.v.c = strcpy(tests.v.c, s);
    bzero((void *)(tests.u.c), size);
    ft_bzero((void*)(tests.v.c), size);
    if (memcmp(tests.u.c, tests.v.c, size))
    {
        printf("\033[0;31mFailure\n\e[0m");
        return (1);
    }
    printf("\033[0;32mSuccess\n\e[0m");
    return (0);
}

int     unit_bzero_float(float n, size_t size)
{
    t_bzero     tests;

    tests.u.d = n;
    tests.v.d = n;
    bzero((void *)&(tests.u.d), size);
    ft_bzero((void *)&(tests.v.d), size);
    if (memcmp(&(tests.u.b), &(tests.v.b), size))
    {
      printf("\033[0;31mFailure\n\e[0m");
      return (1);
    }
    printf("\033[0;32mSuccess\n\e[0m");
    return (0);
}