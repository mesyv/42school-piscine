/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:08:10 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/21 14:22:33 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*a;
	char	b;

	(void) argc;
	i = 1;
	b = '\n';
	while (argv[i] != 0)
	{
		j = 0;
		a = argv[i];
		while (a[j] != '\0')
		{
			write(1, &a[j], 1);
			j++;
		}
		write(1, &b, 1);
		i++;
	}
}
