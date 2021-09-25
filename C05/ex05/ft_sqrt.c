/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:47:12 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/19 19:32:18 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	st;
	int	end;
	int	mid;

	st = 1;
	end = nb;
	if (nb == 0)
		return (0);
	while (st <= end)
	{
		mid = st + ((end - st) / 2);
		if (mid <= nb / mid)
		{
			x = mid;
			st = mid + 1;
		}
		else
			end = mid - 1;
	}
	if (x * x != nb)
		return (0);
	return (x);
}
