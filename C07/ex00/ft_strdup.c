/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:47:03 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/24 11:48:25 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
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
