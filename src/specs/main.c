#include <stdio.h>
#include "unit_bzero.h"
#include "unit_strcat.h"
#include "unit_isalpha.h"
#include "unit_isdigit.h"

int		main(void)
{
	printf("----------------\nBEGINNING TESTS\n----------------\n\n");
	unit_bzero();
	printf("\n");
	unit_strcat();
	printf("\n");
	unit_isalpha();
	printf("\n");
	unit_isdigit();
	return 0;
}