/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <ldeckers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 23:49:21 by ldeckers          #+#    #+#             */
/*   Updated: 2015/02/12 18:17:51 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int temp;
	int sign;

	i = 0;
	temp = 0;
	sign = 1;
	if (ft_isspace(str[i]) == 1)
		(NULL);
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		temp = (temp * 10 + (str[i] - 48));
		i++;
	}
	return (temp * sign);
}
