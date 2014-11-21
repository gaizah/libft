/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:49:52 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/21 21:36:14 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *ts1;
	unsigned char *ts2;

	i = 0;
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while ((ts1 && ts2) && (i <= n))
	{
		if (ts1[i] > ts2[i])
			return (ts1[i] - ts2[i]);
		else if (ts1[i] < ts2[i])
			return (ts1[i] - ts2[i]);
		i++;
	}
	return(0);	
}
