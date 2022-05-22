#include <unistd.h>
void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char  *str)
{
	int index;
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int count;
	count = 1;
	if(argc > 1)
	{ 
		while(count < argc)
		{
			ft_print_params(argv[count]);
			count++;
		}
	}
	return (0);
}
