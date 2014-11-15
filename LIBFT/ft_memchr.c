/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:15:43 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/10 16:32:26 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*tsrc;

	d = (unsigned char)c;
	tsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (tsrc[i] == d)
			return ((void *)d);
		i++;
	}
	return (NULL);
}
