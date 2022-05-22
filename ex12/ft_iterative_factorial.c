#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int result;
	result = 1;
	
	if(nb == 1 || nb == 0)
		return (1);
	if(nb < 0)
		return (0);
	else
	{
		while (nb != 1 )
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}
int	main(void)
{
	int n;
	int res;

	n = 1;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}
