/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:52:56 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/17 10:29:34 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
		v++;
	return (v);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && j <= ft_strlen(to_find))
			{
				if (j == ft_strlen(to_find) - 1)
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
