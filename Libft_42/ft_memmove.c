/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:33:55 by ldeckers          #+#    #+#             */
/*   Updated: 2014/12/27 04:51:51 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	tmp;
	unsigned char	*tdst;
	unsigned char	*tsrc;

	i = 0;
	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)src;
	while (i < len)
	{
		tmp = tdst[i];
		tdst[i] = tsrc[i];
		tsrc[i] = tmp;
		i++;
	}
	return ((void *)tdst);
}
