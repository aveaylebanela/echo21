#include <stdio.h>

int ft_is_prime(int nb);

int	main (void)
{
	if (ft_is_prime(0) == 0)
	{
		printf("0 check\n");
	}
	else
	{
		printf("0 not check\n");
	}
	if (ft_is_prime(1) == 0)
	{
        printf("1 check\n");
	}
	else
	{
        printf("1 not check\n");
    }
	if (ft_is_prime(7) == 1)
    {
		printf("7 check\n");
    }
  	else
    {
		printf("7 not check\n");
    }
	if (ft_is_prime(8) == 0)
	{
		printf("8 check\n");
	}
	else
	{
		printf("8 not check\n");
	}
}
