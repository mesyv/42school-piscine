/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:52:26 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/19 17:09:33 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = power;
	j = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i > 1)
	{
		j = j * nb;
		i--;
	}
	return (j);
}
