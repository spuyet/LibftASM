#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libfts.h"
#include "unit_memcpy.h"

void	unit_memcpy(void)
{
	int   r;
	printf("Unit tests for MEMCPY\n---------------------\n");
	printf("TEST #1: ");
	r = unit_memcpy_test(42, 'a');
	printf("TEST #2: ");
	r += unit_memcpy_test(2000, 0);
	printf("TEST #3: ");
	r += unit_memcpy_test(0, 98);
	printf("TEST #4: ");
	r += unit_memcpy_test(11, 42);
	printf("[%d] Tests failed !\n---------------------\n", r);
}

int		unit_memcpy_test(size_t n, int c)
{
	void	*s1 = malloc(n);
	void	*s3 = malloc(n);
	s3 = memset(s3, c, n);
	s1 = ft_memcpy(s1, s3, n);
	if (memcmp(s1, s3, n))
	{
	printf("\033[0;31mFailure\n\e[0m");
	free(s1);
	free(s3);
	return (1);
	}
	printf("\033[0;32mSuccess\n\e[0m");
	free(s1);
	free(s3);
	return (0); 
}