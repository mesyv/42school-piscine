/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:43:38 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/11 15:05:21 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb >= 10 && nb != -2147483648)
	{
		ft_putnbr(nb / 10);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb != -2147483648)
	{
		ft_putchar(nb % 10 + '0');
	}
}
