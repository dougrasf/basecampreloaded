/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 02:26:06 by dofranci          #+#    #+#             */
/*   Updated: 2022/05/24 02:27:34 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	int	index;

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
	int	count;

	count = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			ft_print_params(argv[count]);
			count++;
		}
	}
	return (0);
}
