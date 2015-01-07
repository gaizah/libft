/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <ldeckers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 23:49:21 by ldeckers          #+#    #+#             */
/*   Updated: 2014/12/27 08:34:45 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t i;
	size_t j;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	if (j >= size)
		return (size + i);
	else
		len = (j + i);
	i = 0;
	while (src[i] && (j == size - 1))
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len);
}
