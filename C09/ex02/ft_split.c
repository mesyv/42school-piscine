/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:12:56 by ksmolag           #+#    #+#             */
/*   Updated: 2021/09/29 11:04:00 by ksmolag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_count(char *str, char *charset)
{
	int i;
	int j;
	int m;

	i = 0;
	m = 0;
	while (str[i] != '\0')
	{
        j = 0;
		while (str[i] == charset[j])
        {
            if (j == ft_strlen(charset) - 1)
                m++;
            i++;
            j++;
        }
        i++;
	}
	i = (ft_strlen(str) - ft_strlen(charset)) + ((m + 1) * ft_strlen(charset)); 
	return (i);
}

char *ft_save_first(char *str, char *charset, int l, int i)
{
	int x;
	int z;
	char *var;

	x = 0;
	z = 1;
	var = malloc(sizeof(char) * ft_count(str, charset) + 1);
	while (l++ <= i)
		var[x++] = str[l];
	x = 0; 
	while (var[x] != '\0')
	{
		printf("%c", var[x]);
		x++;
	}
	printf("%c", '\n');
    return (var);
}

char *ft_save(char *str, char *charset, int l, int i)
{
	int x;
	int z;
	char *var;

	x = 0;
	z = -1;
	var = malloc(sizeof(char) * ft_count(str, charset) + 1);
	while (charset[x] != '\0')
	{
		var[x] = charset[x];
		x++;
	}
	while (l++ <= i)
		var[x++] = str[l];
	while (charset[x] != '\0')
	{
		var[x] = charset[x];
		x++;
	}
	x = 0; 
	while (var[x] != '\0')
	{
		printf("%c", var[x]);
		x++;
	}
	printf("%c", '\n');
    return (var);
}

char **ft_split(char *str, char *charset)
{
	int	i;
	int j;
	int k;
    int l;
	int m;
	char **ret;

	ret = malloc(sizeof(char) * ft_count(str, charset) + 1);
	i = 0;
	k = 0;
    l = 0;
	while (str[i] != '\0')
	{
		j = 0;
		m = 0;
		while (j <= ft_strlen(charset))
		{
			if (str[i] == charset[j])
			{
				m++;
				i++;
			}
			if (m == ft_strlen(charset))
			{
				if (k == 0)
                	ret[k] = ft_save_first(str, charset, l - 1, i - ft_strlen(charset) + 1);
				else
					ret[k] = ft_save(str, charset, l - 1, i - ft_strlen(charset) + 1);
                l = i;
                k++;
                break;
			}
			j++;
		}
		i++;
	}
	ret[k] = ft_save(str, charset, l - 1, i - ft_strlen(charset) + 1);
    return (ret);
}

