/* ************************************************************************** */ 
/*									      */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 23:37:48 by ldeckers          #+#    #+#             */
/*   Updated: 2015/01/08 20:13:35 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;
	char *temp;

	i = 0;
	len = ft_strlen(s) - 1;
	if (s == NULL)
		return (NULL);
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	while  (s[len] == ' ' || s[len] == '\n' || s[len] == '\t') 
		len--;
	temp = ft_strsub(s, i, len - i); 
	return (temp);
}
