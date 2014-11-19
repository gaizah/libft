/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <ldeckers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:23:21 by ldeckers          #+#    #+#             */
/*   Updated: 2014/11/03 17:39:44 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnew(size_t size)
{
	size_t i;
	void *mem;

	i = 0;
	mem = malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	ft_memalloc(size + 1);
	return (mem);
}
