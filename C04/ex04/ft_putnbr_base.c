/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:42:39 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/18 18:49:38 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_ver(char *bas)
{
	int	x;
	int	z;

	x = 0;
	while (bas[x] != '\0')
	{
		if (bas[x] == '-' || bas[x] == '+')
			return (0);
		z = x - 1;
		while (z >= 0)
		{
			if (bas[x] == bas[z])
				return (0);
			z--;
		}	
		x++;
	}
	if (x <= 1)
		return (0);
	return (1);
}

void	ft_rec(int nbr, char *base, int size)
{
	int		n;
	char	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= size)
		ft_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_ver(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		ft_rec(nbr, base, i);
	}
}
