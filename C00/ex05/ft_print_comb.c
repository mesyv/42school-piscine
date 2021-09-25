/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:13:20 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/09 17:14:21 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_if(char a, char b, char c)
{
	char	co;
	char	sp;

	co = ',';
	sp = ' ';
	if (a != b && a != c && b != c)
	{
		if (a == '7' && b == '8' && c == '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
		}
		else
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, &co, 1);
			write(1, &sp, 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '8')
	{
		b = a;
		while (b <= '9')
		{
			c = b;
			while (c <= '9')
			{
				ft_if(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
