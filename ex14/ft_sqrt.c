/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ sqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dofranci <dofranci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:47:22 by dofranci          #+#    #+#             */
/*   Updated: 2022/05/24 02:31:17 by dofranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (result < 46341 && (result * result) <= nb)
	{
		if ((result * result) == nb)
		{
			return (result);
		}
		result++;
	}
	return (0);
}
