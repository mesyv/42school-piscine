/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:50:47 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/24 12:18:32 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	a;

	if (min >= max)
		return (0);
	i = (int *)malloc(sizeof(int) * (max - min));
	a = 0;
	while (min < max)
	{
		i[a] = min;
		a++;
		min++;
	}
	return (i);
}
