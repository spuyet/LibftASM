#include <ctype.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_isdigit.h"

void	unit_isdigit(void)
{
	int		r;

	r = 0;
	printf("Unit tests for IS_DIGIT\n---------------------\n");
    printf("TEST #1: ");
    r += unit_isdigit_one();
    printf("TEST #2: ");
    r += unit_isdigit_two();
    printf("TEST #3: ");
    r += unit_isdigit_three();
    printf("TEST #4: ");
    r += unit_isdigit_four();
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int		unit_isdigit_one(void)
{
	if (ft_isdigit(42) != isdigit(42))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}

int		unit_isdigit_two(void)
{
	if (ft_isdigit(52) != isdigit(52))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}

int		unit_isdigit_three(void)
{
	if (ft_isdigit(57) != isdigit(57))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}

int		unit_isdigit_four(void)
{
	if (ft_isdigit(116) != isdigit(116))
	{
		printf("\033[0;31mFailure\n\e[0m");
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);	
}