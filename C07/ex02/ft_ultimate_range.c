/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:23:41 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/24 14:08:18 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*i;
	int	a;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = (int *)malloc(sizeof(int) * (max - min));
	a = 0;
	while (min < max)
	{
		i[a] = min;
		a++;
		min++;
	}
	*range = i;
	return (size);
}
