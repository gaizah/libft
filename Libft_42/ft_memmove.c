/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:33:55 by ldeckers          #+#    #+#             */
/*   Updated: 2015/02/12 18:13:30 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char	tmp;
	char	*tdst;
	char	*tsrc;

	i = 0;
	tdst = dst;
	tsrc = (char*)src;
	while (i < len && tsrc[i] && tdst[i])
	{
		tmp = tsrc[i];
		tdst[i] = tmp;
		i++;
	}
	return ((void*)dst);
}
