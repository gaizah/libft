/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <ldeckers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:45:19 by ldeckers          #+#    #+#             */
/*   Updated: 2014/12/27 04:48:47 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
