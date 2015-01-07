/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 23:42:57 by ldeckers          #+#    #+#             */
/*   Updated: 2015/01/08 00:38:15 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*temp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (((size_t)start + len) > ft_strlen(s))
		return (NULL);
	temp = (char*)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		temp[i] = s[start++];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
