#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void	ft_bzero(void* ptr, size_t lol);

int		main(void)
{
	int	i;
	int	ptr[] = {1, 2, 3, 4};
	int	ptr2[] = {1, 2, 3, 4};
	for(i = 0 ; i < 4 ; i++)
		printf("%d\n", ptr[i]);
	printf("\n");
	ft_bzero(ptr, 4);
	for(i = 0 ; i < 4 ; i++)
		printf("%d\n", ptr[i]);
	printf("\n");

	for(i = 0 ; i < 4 ; i++)
		printf("%d\n", ptr2[i]);
	printf("\n");
	bzero(ptr2, 4);
	for(i = 0 ; i < 4 ; i++)
		printf("%d\n", ptr2[i]);
	return 0;
}