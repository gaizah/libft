/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <ldeckers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:23:21 by ldeckers          #+#    #+#             */
/*   Updated: 2014/12/27 08:35:47 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*mem;

	mem = malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	ft_memalloc(size + 1);
	return (mem);
}
