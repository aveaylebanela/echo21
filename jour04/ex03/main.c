/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmirna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:09:12 by cmirna            #+#    #+#             */
/*   Updated: 2019/03/02 19:03:26 by cmirna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_recursive_power(int nb, int power);

int	main(void)
{
	int x;

	x = ft_recursive_power(3, 4);
	printf("%d", x);
}
