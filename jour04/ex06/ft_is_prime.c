/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmirna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 21:07:10 by cmirna            #+#    #+#             */
/*   Updated: 2019/03/02 23:40:41 by cmirna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	else
	{
		while (c != nb)
		{
			if (nb % c == 0)
			{
				return (0);
			}
			else
			{
				c++;
			}
		}
		return (1);
	}
}