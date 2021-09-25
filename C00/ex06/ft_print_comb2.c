/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:31:52 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/09 19:32:42 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_pattern(int a, int b)
{
	ft_putchar((char)(a / 10) + '0');
	ft_putchar((char)(a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((char)(b / 10) + '0');
	ft_putchar((char)(b % 10) + '0');
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				ft_putchar((char)(a / 10) + '0');
				ft_putchar((char)(a % 10) + '0');
				ft_putchar(' ');
				ft_putchar((char)(b / 10) + '0');
				ft_putchar((char)(b % 10) + '0');
			}
			else
			{
				ft_pattern(a, b);
			}
			b++;
		}
		a++;
	}
}
