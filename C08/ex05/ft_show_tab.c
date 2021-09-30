/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:51:15 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/27 17:25:24 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *st)
{
	int	i;

	i = 0;
	while (st[i] != '\0')
	{
		write(1, &st[i], 1);
		i++;
	}
}

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb > 9)
		ft_putnbr(nb / 10);
	if (nb != -2147483648)
		ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
