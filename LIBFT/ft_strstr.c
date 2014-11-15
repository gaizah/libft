/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:43:05 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/06 18:35:16 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(char *str, char *to_find, int i)
{
	int		j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (to_find[j] == str[i])
		{
			j++;
			i++;
		}
		else
			return (1);
	}
	return (0);
}

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str, to_find, i) == 0)
			return (str + i);
		i++;
	}
	return (0);
}
