/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:20:41 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/27 12:49:08 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *st)
{
	int	a;

	a = 0;
	while (st[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	int		c;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == 0)
		return (0);
	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}	
	dest[c] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	ac = ac + 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}
