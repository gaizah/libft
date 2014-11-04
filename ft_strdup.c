/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <ldeckers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:02:55 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/04 17:05:58 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	int i;
	char *s2

	i = 0;
	while (s1[i])
		i++;
	s2 = (char *)malloc(sizeof(char) * i + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
