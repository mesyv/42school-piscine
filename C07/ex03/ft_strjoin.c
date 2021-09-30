/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:13:24 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/26 18:16:30 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

int	ft_arraylen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			i++;
			k++;
		}
		i = 0;
		j++;
		while (sep[i] != '\0' && j < size)
		{
			i++;
			k++;
		}
	}
	return (k);
}

char	*ft_copy(int size, char **strs, char *sep, int k)
{
	char	*str;
	int		i[2];

	i[0] = 0;
	str = (char *)malloc(sizeof(char) * ft_arraylen(size, strs, sep) + 1);
	while (i[0] < size)
	{
		i[1] = 0;
		while (strs[i[0]][i[1]] != '\0')
		{
			str[k] = strs[i[0]][i[1]];
			k++;
			i[1]++;
		}
		i[1] = 0;
		i[0]++;
		while (sep[i[1]] != '\0' && i[0] < size)
		{
			str[k] = sep[i[1]];
			k++;
			i[1]++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * ft_arraylen(size, strs, sep) + 1);
	if (ret == NULL)
		return (0);
	if (size == 0)
		return (0);
	ret = ft_copy(size, strs, sep, 0);
	return (ret);
}
