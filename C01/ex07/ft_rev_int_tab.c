/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:58:44 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/12 19:48:12 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev;
	int	r;

	r = 0;
	while (r < size)
	{
		rev = tab[r];
		tab[r] = tab[size - 1];
		tab[size - 1] = rev;
		size--;
		r++;
	}
}
