#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_cat.h"

void    unit_cat(void)
{
    int   r;

    r = 0;
    printf("Unit tests for cat\n---------------------\n");
    printf("TEST #1: ");
    r += unit_cat_first();
    if (r)
        printf("\033[0;31mFailure\n\e[0m");
    else
        printf("\033[0;32mSuccess\n\e[0m");
    printf("TEST #2: ");
    r += unit_cat_second();
    if (r)
        printf("\033[0;31mFailure\n\e[0m");
    else
        printf("\033[0;32mSuccess\n\e[0m");
    printf("TEST #3: ");
    r += unit_cat_third();
    if (r)
        printf("\033[0;31mFailure\n\e[0m");
    else
        printf("\033[0;32mSuccess\n\e[0m");
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int     unit_cat_first(void)
{
    int fd;

    fd = open("Makefile", O_RDONLY);
    if (fd < 0)
        puts("Cannot open file !");
    ft_cat(fd);
    close(fd);
    return (0);
}

int     unit_cat_second(void)
{
    ft_cat(-1);
    return (0);
}

int     unit_cat_third(void)
{
    ft_cat(420000);
    return (0);
}