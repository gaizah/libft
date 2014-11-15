/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:49:52 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/10 19:30:32 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>

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

int     main(int ac, char **av)
{
	printf("ft_memcmp: %d\nmemcmp: %d\n", ft_memcmp(av[1], av[2], 3), memcmp(av[1], av[2], 3));
    return (0);
}
