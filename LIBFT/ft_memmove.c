/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:33:55 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/10 16:47:49 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	tmp[len + 1];
	unsigned char	tdst;
	unsigned char	tsrc;

	i = 0;
	tdst = (unsigned char)dst;
	tsrc = (unsigned char)src;
	while (tdst[i] && tsrc[i] < len)
	{
		tmp = tdst;
		tdst = src;
		src = tmp;
		i++;
	}
	return (*tdest);
}
