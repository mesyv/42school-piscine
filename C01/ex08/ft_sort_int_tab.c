/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:10:05 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/12 19:59:43 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	rev;
	int	k;

	k = 0;
	while (k < size)
	{
		l = k + 1;
		while (l < size)
		{
			if (tab[l] <= tab[k])
			{
				rev = tab[k];
				tab[k] = tab[l];
				tab[l] = rev;
			}
			l++;
		}
		k++;
	}
}
