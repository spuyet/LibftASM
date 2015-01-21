#include <ctype.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_isalpha.h"

void	unit_isalpha(void)
{
	int		r;

	r = 0;
	printf("Unit tests for IS_ALPHA\n---------------------\n");
    printf("TEST #1: ");
    r += unit_isalpha_one();
    printf("TEST #2: ");
    r += unit_isalpha_two();
    printf("TEST #3: ");
    r += unit_isalpha_three();
    printf("TEST #4: ");
    r += unit_isalpha_four();
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int		unit_isalpha_one(void)
{
	if (ft_isalpha('c') != isalpha('c'))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}

int		unit_isalpha_two(void)
{
	if (ft_isalpha('*') != isalpha('*'))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}

int		unit_isalpha_three(void)
{
	if (ft_isalpha('#') != isalpha('#'))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}

int		unit_isalpha_four(void)
{
	if (ft_isalpha('v') != isalpha('v'))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}