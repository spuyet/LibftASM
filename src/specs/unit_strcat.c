#include <string.h>
#include <stdlib.h>	
#include <stdio.h>
#include "libfts.h"
#include "unit_strcat.h"

void	unit_strcat(void)
{
	int		r;

	r = 0;
	printf("Unit tests for STRCAT\n---------------------\n");
    printf("TEST #1: ");
    r += unit_strcat_one();
    printf("TEST #2: ");
    r += unit_strcat_two();
    printf("TEST #3: ");
    r += unit_strcat_three();
    printf("TEST #4: ");
    r += unit_strcat_four();
    printf("[%d] Tests failed !\n---------------------\n", r);
}

int		unit_strcat_one(void)
{
	char	*s1;
	char	*s2 = "This is a test !";
	s1 = (char*)malloc(16 * sizeof(char));
	ft_bzero(s1, 16);
	s1 = ft_strcat(s1, s2);
	if (memcmp(s1, s2, 15))
	{
		printf("\033[0;31mFailure\n\e[0m");
		free(s1);
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
    free(s1);
	return (0);
}

int		unit_strcat_two(void)
{
	char	*s1;
	char	s2[] = "This is a test !";
	s1 = (char*)malloc(16 * sizeof(char));
	ft_bzero(s1, 16);
	s1 = ft_strcat(s1, s2);
	if (memcmp(s1, s2, 15))
	{
		printf("\033[0;31mFailure\n\e[0m");
		free(s1);
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
    free(s1);
	return (0);
}

int		unit_strcat_three(void)
{
	char	*s1;
	char	s2[] = "This is a";
	char	s3[] = " test !";
	s1 = (char*)malloc(16 * sizeof(char));
	ft_bzero(s1, 16);
	s1 = ft_strcat(s1, s2);
	s1 = ft_strcat(s1, s3);
	if (memcmp(s1, "This is a test !", 15))
	{
		printf("\033[0;31mFailure\n\e[0m");
		free(s1);
		return (1);
	}
	free(s1);
    printf("\033[0;32mSuccess\n\e[0m");
	return (0);
}

int		unit_strcat_four(void)
{
	char	*s1;
	char	s2[] = " is coming !";

	s1 = (char*)malloc(18 * sizeof(char));
	memcpy(s1, "A test", 7);
	s1 = ft_strcat(s1, s2);
	if (memcmp(s1, "A test is coming !", 18))
	{
		printf("\033[0;31mFailure\n\e[0m");
		free(s1);
		return (1);
	}
    printf("\033[0;32mSuccess\n\e[0m");
    free(s1);
	return (0);
}